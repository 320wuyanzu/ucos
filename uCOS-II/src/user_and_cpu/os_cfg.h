/*
*********************************************************************************************************
系统配置，
可以从原始源码里的 os_cfg_r.h 复制过来再修改，
os_cfg_r.h 是官方提供的模板
*********************************************************************************************************
*/

#ifndef OS_CFG_H
#define OS_CFG_H


/*******************************************************************************************************
**                                 其他
**/
#define OS_APP_HOOKS_EN           1u   /* Application-defined hooks are called from the uC/OS-II hooks */
#define OS_ARG_CHK_EN             0u   /* Enable (1) or Disable (0) argument checking                  */
#define OS_CPU_HOOKS_EN           1u   /* uC/OS-II hooks are found in the processor port files         */
#define OS_DEBUG_EN               1u   /* Enable(1) debug variables                                    */


/********************************************************************************************************
**                                 内存
**/
#define OS_MAX_MEM_PART           5u   // 最大内存分区数
/* --------------------- MEMORY MANAGEMENT -------------------- */
#define OS_MEM_EN                 1u   /* Enable (1) or Disable (0) code generation for MEMORY MANAGER */
#define OS_MEM_NAME_EN            1u   // 是否可以给 内存分区命名
#define OS_MEM_QUERY_EN           1u   // 是否启用 内存查询--OSMemQuery()


/********************************************************************************************************
**                                 调度
**/
#define OS_SCHED_LOCK_EN          1u   // 是否启用 调度锁--OSSchedLock() and OSSchedUnlock()


/********************************************************************************************************
**                                 队列控制块
**/
#define OS_MAX_QS                 4u   // 用户应用的最大队列控制块数


/*******************************************************************************************************
**                                 任务优先级
**/
#define OS_LOWEST_PRIO           63u   // 可以分配的最低任务优先级，绝不能超过 254
/*******************************************************************************************************
**                                 系统任务的栈
**/
#define OS_TASK_TMR_STK_SIZE    128u   // 定时器 任务的栈大小(# of OS_STK wide entries)
#define OS_TASK_STAT_STK_SIZE   128u   // 统计 任务的栈大小(# of OS_STK wide entries)
#define OS_TASK_IDLE_STK_SIZE   128u   // 空闲 任务的栈大小(# of OS_STK wide entries)
/*******************************************************************************************************
**                                 任务管理
**/
#define OS_MAX_TASKS             20u   // 用户应用的最大任务数，必须大于等于 2
#define OS_TASK_CHANGE_PRIO_EN    1u   // 是否允许任务改变优先级 -- OSTaskChangePrio()                      
#define OS_TASK_CREATE_EN         1u   // 是否允许创建任务 -- OSTaskCreate()                          
#define OS_TASK_CREATE_EXT_EN     1u   // 是否允许创建扩展任务 -- OSTaskCreateExt()                       
#define OS_TASK_DEL_EN            1u   // 是否允许删除任务 -- OSTaskDel()                             
#define OS_TASK_NAME_EN           1u   // 是否允许给任务起名字                                        
#define OS_TASK_PROFILE_EN        1u   //     Include variables in OS_TCB for profiling                
#define OS_TASK_QUERY_EN          1u   // 是否允许任务查询 -- OSTaskQuery()                           
#define OS_TASK_REG_TBL_SIZE      1u   //     Size of task variables array (#of INT32U entries)        
#define OS_TASK_STAT_EN           1u   // 是否启用统计任务
#define OS_TASK_STAT_STK_CHK_EN   1u   // 是否允许在统计任务中检查用户任务的栈大小
#define OS_TASK_SUSPEND_EN        1u   // 是否允许阻塞任务 -- OSTaskSuspend() and OSTaskResume()     
#define OS_TASK_SW_HOOK_EN        1u   //     Include code for OSTaskSwHook()                          


/********************************************************************************************************
**                                 事件
**/
#define OS_EVENT_MULTI_EN         1u   /* Include code for OSEventPendMulti()                          */
#define OS_EVENT_NAME_EN          1u   /* Enable names for Sem, Mutex, Mbox and Q                      */
#define OS_MAX_EVENTS            10u   /* Max. number of event control blocks in your application      */
/* ------------------------- 事件标志 -------------------------- */
#define OS_MAX_FLAGS              5u   /* Max. number of Event Flag Groups    in your application      */
#define OS_FLAG_EN                1u   /* Enable (1) or Disable (0) code generation for EVENT FLAGS    */
#define OS_FLAG_ACCEPT_EN         1u   /*     Include code for OSFlagAccept()                          */
#define OS_FLAG_DEL_EN            1u   /*     Include code for OSFlagDel()                             */
#define OS_FLAG_NAME_EN           1u   /*     Enable names for event flag group                        */
#define OS_FLAG_QUERY_EN          1u   /*     Include code for OSFlagQuery()                           */
#define OS_FLAG_WAIT_CLR_EN       1u   /* Include code for Wait on Clear EVENT FLAGS                   */
#define OS_FLAGS_NBITS           16u   /* Size in #bits of OS_FLAGS data type (8, 16 or 32)            */
                                       /* -------------------- MESSAGE MAILBOXES --------------------- */
#define OS_MBOX_EN                1u   /* Enable (1) or Disable (0) code generation for MAILBOXES      */
#define OS_MBOX_ACCEPT_EN         1u   /*     Include code for OSMboxAccept()                          */
#define OS_MBOX_DEL_EN            1u   /*     Include code for OSMboxDel()                             */
#define OS_MBOX_PEND_ABORT_EN     1u   /*     Include code for OSMboxPendAbort()                       */
#define OS_MBOX_POST_EN           1u   /*     Include code for OSMboxPost()                            */
#define OS_MBOX_POST_OPT_EN       1u   /*     Include code for OSMboxPostOpt()                         */
#define OS_MBOX_QUERY_EN          1u   /*     Include code for OSMboxQuery()                           */


/*******************************************************************************************************
**                                 互斥信号量
**/ 
#define OS_MUTEX_EN               1u   /* Enable (1) or Disable (0) code generation for MUTEX          */
#define OS_MUTEX_ACCEPT_EN        1u   /*     Include code for OSMutexAccept()                         */
#define OS_MUTEX_DEL_EN           1u   /*     Include code for OSMutexDel()                            */
#define OS_MUTEX_QUERY_EN         1u   /*     Include code for OSMutexQuery()                          */


/*******************************************************************************************************
**                                 信号量
**/
#define OS_SEM_EN                 1u   /* Enable (1) or Disable (0) code generation for SEMAPHORES     */
#define OS_SEM_ACCEPT_EN          1u   /*    Include code for OSSemAccept()                            */
#define OS_SEM_DEL_EN             1u   /*    Include code for OSSemDel()                               */
#define OS_SEM_PEND_ABORT_EN      1u   /*    Include code for OSSemPendAbort()                         */
#define OS_SEM_QUERY_EN           1u   /*    Include code for OSSemQuery()                             */
#define OS_SEM_SET_EN             1u   /*    Include code for OSSemSet()                               */


/*******************************************************************************************************
**                                 消息队列
**/
#define OS_Q_EN                   1u   /* Enable (1) or Disable (0) code generation for QUEUES         */
#define OS_Q_ACCEPT_EN            1u   /*     Include code for OSQAccept()                             */
#define OS_Q_DEL_EN               1u   /*     Include code for OSQDel()                                */
#define OS_Q_FLUSH_EN             1u   /*     Include code for OSQFlush()                              */
#define OS_Q_PEND_ABORT_EN        1u   /*     Include code for OSQPendAbort()                          */
#define OS_Q_POST_EN              1u   /*     Include code for OSQPost()                               */
#define OS_Q_POST_FRONT_EN        1u   /*     Include code for OSQPostFront()                          */
#define OS_Q_POST_OPT_EN          1u   /*     Include code for OSQPostOpt()                            */
#define OS_Q_QUERY_EN             1u   /*     Include code for OSQQuery()                              */


/********************************************************************************************************
**                                 时钟
**/
#define OS_TICK_STEP_EN           1u   /* Enable tick stepping feature for uC/OS-View                  */
#define OS_TICKS_PER_SEC        100u   /* Set the number of ticks in one second                        */
/* --------------------- TIME MANAGEMENT ---------------------- */
#define OS_TIME_DLY_HMSM_EN       1u   /*     Include code for OSTimeDlyHMSM()                         */
#define OS_TIME_DLY_RESUME_EN     1u   /*     Include code for OSTimeDlyResume()                       */
#define OS_TIME_GET_SET_EN        1u   /*     Include code for OSTimeGet() and OSTimeSet()             */
#define OS_TIME_TICK_HOOK_EN      1u   /*     Include code for OSTimeTickHook()                        */
/* --------------------- TIMER MANAGEMENT --------------------- */
#define OS_TMR_EN                 1u   /* Enable (1) or Disable (0) code generation for TIMERS         */
#define OS_TMR_CFG_MAX           16u   /*     Maximum number of timers                                 */
#define OS_TMR_CFG_NAME_EN        1u   /*     Determine timer names                                    */
#define OS_TMR_CFG_WHEEL_SIZE     8u   /*     Size of timer wheel (#Spokes)                            */
#define OS_TMR_CFG_TICKS_PER_SEC 10u   /*     Rate at which timer management task runs (Hz)            */

#endif
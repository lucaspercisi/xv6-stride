#define NPROC        64  // maximum number of processes
#define KSTACKSIZE 4096  // size of per-process kernel stack
#define NCPU          1  // maximum number of CPUs
#define NOFILE       16  // open files per process
#define NFILE       100  // open files per system
#define NINODE       50  // maximum number of active i-nodes
#define NDEV         10  // maximum major device number
#define ROOTDEV       1  // device number of file system root disk
#define MAXARG       32  // max exec arguments
#define MAXOPBLOCKS  10  // max # of blocks any FS op writes
#define LOGSIZE      (MAXOPBLOCKS*3)  // max data blocks in on-disk log
#define NBUF         (MAXOPBLOCKS*3)  // size of disk block cache
#define FSSIZE       1000  // size of file system in blocks
#define NTICKETS     (NPROC/NCPU) // default per-process tickets
#define MAXTICKETS   (NTICKETS*NTICKETS) // default max per-process tickets
//Constante de passo relacionada ao máximo de tickets
#define STRIDE_CONST (MAXTICKETS*10)
//INT_MAX com margem de erro de 2 x o maior passo poassível
#define INT_MAX      (2147483647 - (STRIDE_CONST * 2))
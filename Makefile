CC = g++

# Requirements: http://www.cpputest.org/ should be placed in btstack/test

CPPUTEST_HOME = ../cpputest

CFLAGS  = -g -Wall -I.. -I$(CPPUTEST_HOME)/include
LDFLAGS += -L$(CPPUTEST_HOME)/lib -lCppUTest -lCppUTestExt

# VPATH += ${BTSTACK_ROOT}/ble 
# VPATH += ${BTSTACK_ROOT}/src
# VPATH += ${BTSTACK_ROOT}/platforms/posix/src

# COMMON = \
#     utils.c			            \
#     btstack_memory.c			\
#     memory_pool.c			    \
#     linked_list.c			    \
#     sdp_util.c			        \
#     remote_device_db_memory.c	\
#     run_loop.c					\
#     run_loop_posix.c 			\
#     hci_cmds.c					\
#     hci_dump.c					\
#     hci.c                       \
#     ad_parser.c                 \
	
COMMON_OBJ = $(COMMON:.c=.o)

all: testTravisCi

testTravisCi: ${CORE_OBJ} ${COMMON_OBJ} main.c
	${CC} ${CORE_OBJ} ${COMMON_OBJ} main.c ${CFLAGS} ${LDFLAGS} -o $@

test:
	./testTravisCi

show:
	echo $(CPPUTEST_HOME)

clean:
	rm -f  testTravisCi
	rm -f  *.o
	rm -rf *.dSYM
	
// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include <Globals.h>
#include <Common.h>
#include "Media.h"
// TODO:  在此处引用程序需要的其他头文件

#ifdef _WIN32
extern int gettimeofday(struct timeval *tp, void *tzp);
extern int rand_r(unsigned int *seed);
#endif

#include <boost/shared_ptr.hpp>
#include <boost/scoped_ptr.hpp>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/asio.hpp>
#include <boost/asio/deadline_timer.hpp>
#include <boost/cstdint.hpp>



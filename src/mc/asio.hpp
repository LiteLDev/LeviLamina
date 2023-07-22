/**
 * @file  asio.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace asio.
 *
 */
namespace asio {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?asio_handler_allocate\@asio\@\@YAPEAX_KZZ
     */
    MCAPI void * asio_handler_allocate(unsigned __int64, ...);
    /**
     * @symbol  ?asio_handler_deallocate\@asio\@\@YAXPEAX_KZZ
     */
    MCAPI void asio_handler_deallocate(void *, unsigned __int64, ...);
    /**
     * @symbol  ??Hasio\@\@YA?AV?$buffers_iterator\@Vconst_buffers_1\@asio\@\@D\@0\@AEBV10\@_J\@Z
     */
    MCAPI class asio::buffers_iterator<class asio::const_buffers_1, char> operator+(class asio::buffers_iterator<class asio::const_buffers_1, char> const &, __int64);

};
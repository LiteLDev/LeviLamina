/**
 * @file  DimensionDocument.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure DimensionDocument.
 *
 */
struct DimensionDocument {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONDOCUMENT
public:
    struct DimensionDocument& operator=(struct DimensionDocument const &) = delete;
    DimensionDocument(struct DimensionDocument const &) = delete;
#endif

public:
    /**
     * @symbol  ??0DimensionDocument\@\@QEAA\@XZ
     */
    MCAPI DimensionDocument();
    /**
     * @symbol  ??1DimensionDocument\@\@QEAA\@XZ
     */
    MCAPI ~DimensionDocument();
    /**
     * @symbol  ?bindType\@DimensionDocument\@\@SAXXZ
     */
    MCAPI static void bindType();

};
/**
 * @file  PackMetadata.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PackMetadata.
 *
 */
class PackMetadata {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMETADATA
public:
    class PackMetadata& operator=(class PackMetadata const &) = delete;
    PackMetadata(class PackMetadata const &) = delete;
#endif

public:
    /**
     * @symbol  ??0PackMetadata\@\@QEAA\@XZ
     */
    MCAPI PackMetadata();
    /**
     * @symbol  ??0PackMetadata\@\@QEAA\@V?$unique_ptr\@UEducationMetadata\@\@U?$default_delete\@UEducationMetadata\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI PackMetadata(std::unique_ptr<struct EducationMetadata>);

};
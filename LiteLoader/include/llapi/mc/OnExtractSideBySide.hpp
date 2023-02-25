/**
 * @file  OnExtractSideBySide.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnExtractSideBySide.
 *
 */
struct OnExtractSideBySide {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONEXTRACTSIDEBYSIDE
public:
    struct OnExtractSideBySide& operator=(struct OnExtractSideBySide const &) = delete;
    OnExtractSideBySide(struct OnExtractSideBySide const &) = delete;
    OnExtractSideBySide() = delete;
#endif

public:
    /**
     * @symbol  ?createContext\@OnExtractSideBySide\@\@QEBA?AUExtractionSystemContext\@\@XZ
     */
    MCAPI struct ExtractionSystemContext createContext() const;

};
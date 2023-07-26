/**
 * @file  SideBySideCopyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SideBySideCopyComponent.
 *
 */
struct SideBySideCopyComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECOPYCOMPONENT
public:
    struct SideBySideCopyComponent& operator=(struct SideBySideCopyComponent const &) = delete;
    SideBySideCopyComponent(struct SideBySideCopyComponent const &) = delete;
    SideBySideCopyComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0SideBySideCopyComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI SideBySideCopyComponent(struct SideBySideCopyComponent &&);
    /**
     * @symbol  ??4SideBySideCopyComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct SideBySideCopyComponent & operator=(struct SideBySideCopyComponent &&);
    /**
     * @symbol  ??1SideBySideCopyComponent\@\@QEAA\@XZ
     */
    MCAPI ~SideBySideCopyComponent();

};
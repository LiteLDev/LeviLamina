/**
 * @file  AttributesComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure AttributesComponent.
 *
 */
struct AttributesComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTESCOMPONENT
public:
    struct AttributesComponent& operator=(struct AttributesComponent const &) = delete;
    AttributesComponent() = delete;
#endif

public:
    /**
     * @symbol  ??0AttributesComponent\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI AttributesComponent(struct AttributesComponent &&);
    /**
     * @symbol  ??0AttributesComponent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI AttributesComponent(struct AttributesComponent const &);
    /**
     * @symbol  ??4AttributesComponent\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct AttributesComponent & operator=(struct AttributesComponent &&);
    /**
     * @symbol  ??1AttributesComponent\@\@QEAA\@XZ
     */
    MCAPI ~AttributesComponent();

};
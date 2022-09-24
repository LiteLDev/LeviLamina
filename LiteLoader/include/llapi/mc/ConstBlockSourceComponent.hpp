/**
 * @file  ConstBlockSourceComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ConstBlockSourceComponent.
 *
 */
struct ConstBlockSourceComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSTBLOCKSOURCECOMPONENT
public:
    ConstBlockSourceComponent() = delete;
#endif

public:
    /**
     * @hash   1883393500
     * @symbol ??0ConstBlockSourceComponent@@QEAA@V?$not_null@PEBVIConstBlockSource@@@gsl@@@Z
     */
    MCAPI ConstBlockSourceComponent(class gsl::not_null<class IConstBlockSource const *>);
    /**
     * @hash   -1930425803
     * @symbol ??0ConstBlockSourceComponent@@QEAA@AEBU0@@Z
     */
    MCAPI ConstBlockSourceComponent(struct ConstBlockSourceComponent const &);
    /**
     * @hash   -585134680
     * @symbol ?getBlockSource@ConstBlockSourceComponent@@QEBAAEBVIConstBlockSource@@XZ
     */
    MCAPI class IConstBlockSource const & getBlockSource() const;
    /**
     * @hash   -963225170
     * @symbol ??4ConstBlockSourceComponent@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct ConstBlockSourceComponent & operator=(struct ConstBlockSourceComponent const &);

};
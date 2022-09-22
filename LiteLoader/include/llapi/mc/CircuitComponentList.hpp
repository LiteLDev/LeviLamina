/**
 * @file  CircuitComponentList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircuitComponentList.
 *
 */
class CircuitComponentList {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITCOMPONENTLIST
public:
    class CircuitComponentList& operator=(class CircuitComponentList const &) = delete;
    CircuitComponentList(class CircuitComponentList const &) = delete;
    CircuitComponentList() = delete;
#endif

public:
    /**
     * @hash   722872929
     * @symbol ?removeSource@CircuitComponentList@@QEAA_NAEBVBlockPos@@PEBVBaseCircuitComponent@@@Z
     */
    MCAPI bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @hash   324281404
     * @symbol ??1CircuitComponentList@@QEAA@XZ
     */
    MCAPI ~CircuitComponentList();

};
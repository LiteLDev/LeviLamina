/**
 * @file  CircuitComponentList.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
public:
    class Item {
    public:
        class BaseCircuitComponent* mComponent;
        int mDampening;
        BlockPos mPos;
        FaceID mDirection;
        bool mDirectlyPowered;
        int mData;

        inline Item() = default;

        inline Item(BaseCircuitComponent* component, int dampening, const BlockPos& pos)
        : mComponent(component), mDampening(dampening), mPos(pos) {}
    };

    std::vector<Item> mComponents;

#define DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITCOMPONENTLIST
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITCOMPONENTLIST
public:
    class CircuitComponentList& operator=(class CircuitComponentList const &) = delete;
    CircuitComponentList(class CircuitComponentList const &) = delete;
    CircuitComponentList() = delete;
#endif

public:
    /**
     * @symbol ?removeSource\@CircuitComponentList\@\@QEAA_NAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    MCAPI bool removeSource(class BlockPos const &, class BaseCircuitComponent const *);
    /**
     * @symbol ??1CircuitComponentList\@\@QEAA\@XZ
     */
    MCAPI ~CircuitComponentList();

};

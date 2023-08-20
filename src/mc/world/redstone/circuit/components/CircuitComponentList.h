#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/FacingID.h"
#include "mc/world/level/BlockPos.h"

class CircuitComponentList {
public:
    // CircuitComponentList inner types declare
    // clang-format off
    class Item;
    // clang-format on

    // CircuitComponentList inner types define
    class Item {

    public:
        class BaseCircuitComponent* mComponent = nullptr;
        int                         mDampening{};
        class BlockPos              mPos;
        enum class FacingID           mDirection = FacingID::Unknown;
        bool                        mDirectlyPowered{};
        int                         mData{};

        constexpr Item() = delete;

        constexpr Item(BaseCircuitComponent* component, int dampening, const BlockPos& pos)
        : mComponent(component), mDampening(dampening), mPos(pos) {}
    };

    std::vector<Item> mComponents;
public:
    // NOLINTBEGIN
    /**
     * @symbol ?removeSource\@CircuitComponentList\@\@QEAA_NAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    MCAPI bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /**
     * @symbol ??1CircuitComponentList\@\@QEAA\@XZ
     */
    MCAPI ~CircuitComponentList();
    // NOLINTEND
};

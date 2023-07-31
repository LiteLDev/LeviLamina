#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitComponentList {
public:
    // CircuitComponentList inner types declare
    // clang-format off
    class Item;
    // clang-format on

    // CircuitComponentList inner types define
    class Item {

    public:
        // prevent constructor by default
        Item& operator=(Item const&) = delete;
        Item(Item const&)            = delete;
        Item()                       = delete;
    };

public:
    // prevent constructor by default
    CircuitComponentList& operator=(CircuitComponentList const&) = delete;
    CircuitComponentList(CircuitComponentList const&)            = delete;
    CircuitComponentList()                                       = delete;

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

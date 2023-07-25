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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITCOMPONENTLIST_ITEM
    public:
        Item& operator=(Item const&) = delete;
        Item(Item const&)            = delete;
        Item()                       = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITCOMPONENTLIST
public:
    CircuitComponentList& operator=(CircuitComponentList const&) = delete;
    CircuitComponentList(CircuitComponentList const&)            = delete;
    CircuitComponentList()                                       = delete;
#endif

public:
    /**
     * @symbol ?removeSource\@CircuitComponentList\@\@QEAA_NAEBVBlockPos\@\@PEBVBaseCircuitComponent\@\@\@Z
     */
    MCAPI bool removeSource(class BlockPos const&, class BaseCircuitComponent const*);
    /**
     * @symbol ??1CircuitComponentList\@\@QEAA\@XZ
     */
    MCAPI ~CircuitComponentList();
};

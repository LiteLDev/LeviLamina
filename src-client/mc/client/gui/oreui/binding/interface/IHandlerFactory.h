#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IEventHandler; }
// clang-format on

namespace OreUI::Detail {

class IHandlerFactory {
public:
    // IHandlerFactory inner types define
    using eventHandlerPtr = ::cohtml::IEventHandler*;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IHandlerFactory() = default;

    virtual ::cohtml::IEventHandler* makeHandler() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Detail

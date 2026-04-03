#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/EASManager.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
// clang-format on

namespace EAS {

class ClientEASManager : public ::EAS::EASManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::PacketSender&) /*override*/;

    virtual ~ClientEASManager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EAS

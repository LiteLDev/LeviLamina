#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/EASManager.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
namespace EAS { class ClientAttributeLayer; }
// clang-format on

namespace EAS {

class ClientEASManager : public ::EAS::EASManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk1aef85;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientEASManager& operator=(ClientEASManager const&);
    ClientEASManager(ClientEASManager const&);
    ClientEASManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::PacketSender&) /*override*/;
    // NOLINTEND
};

} // namespace EAS

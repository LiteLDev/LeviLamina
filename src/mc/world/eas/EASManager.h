#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
// clang-format on

namespace EAS {

class EASManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9d6ea6;
    ::ll::UntypedStorage<8, 64> mUnk69ce16;
    // NOLINTEND

public:
    // prevent constructor by default
    EASManager& operator=(EASManager const&);
    EASManager(EASManager const&);
    EASManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EASManager() = default;

    virtual void tick(::PacketSender&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EAS

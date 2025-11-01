#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Identity { class IEduAuth; }
namespace Social { class IEduMultiplayerHeadless; }
// clang-format on

class IEDUSystems : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk48a625;
    // NOLINTEND

public:
    // prevent constructor by default
    IEDUSystems& operator=(IEDUSystems const&);
    IEDUSystems(IEDUSystems const&);
    IEDUSystems();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEDUSystems() /*override*/ = default;

    // vIndex: 1
    virtual ::Identity::IEduAuth& getEduAuth() const = 0;

    // vIndex: 2
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

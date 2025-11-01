#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IEDUSystems.h"

// auto generated forward declare list
// clang-format off
namespace Identity { class IEduAuth; }
namespace Social { class IEduMultiplayerHeadless; }
// clang-format on

class EDUSystems : public ::IEDUSystems {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbd6e93;
    ::ll::UntypedStorage<8, 8> mUnk898d35;
    ::ll::UntypedStorage<8, 16> mUnkbac05e;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUSystems& operator=(EDUSystems const&);
    EDUSystems(EDUSystems const&);
    EDUSystems();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EDUSystems() /*override*/ = default;

    // vIndex: 1
    virtual ::Identity::IEduAuth& getEduAuth() const /*override*/;

    // vIndex: 2
    virtual ::Social::IEduMultiplayerHeadless& getMultiplayerHeadless() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

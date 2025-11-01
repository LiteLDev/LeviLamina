#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct LabelSetting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk9f3393;
    ::ll::UntypedStorage<8, 32> mUnk2d45b2;
    // NOLINTEND

public:
    // prevent constructor by default
    LabelSetting& operator=(LabelSetting const&);
    LabelSetting(LabelSetting const&);
    LabelSetting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting& operator=(::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting&&);

    MCNAPI ~LabelSetting();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& TYPE_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}

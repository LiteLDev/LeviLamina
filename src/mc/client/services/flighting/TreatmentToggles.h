#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace flighting {

class TreatmentToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkff0b4c;
    ::ll::UntypedStorage<8, 8> mUnk18b961;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentToggles& operator=(TreatmentToggles const&);
    TreatmentToggles(TreatmentToggles const&);
    TreatmentToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TreatmentToggles() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace flighting

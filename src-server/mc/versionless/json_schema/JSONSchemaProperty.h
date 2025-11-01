#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/json_schema/JSONSchemaArea.h"
#include "mc/versionless/json_schema/JSONSchemaPath.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

struct JSONSchemaProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8cda1d;
    ::ll::UntypedStorage<1, 1> mUnk4e5112;
    ::ll::UntypedStorage<1, 1> mUnk8eba3a;
    ::ll::UntypedStorage<8, 24> mUnkfb161b;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaProperty& operator=(JSONSchemaProperty const&);
    JSONSchemaProperty(JSONSchemaProperty const&);
    JSONSchemaProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchemaProperty(::std::string filename, ::JSONSchemaArea areaType, ::JSONSchemaPath pathType, ::SemVersion optionalVersion);

    MCNAPI ~JSONSchemaProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string filename, ::JSONSchemaArea areaType, ::JSONSchemaPath pathType, ::SemVersion optionalVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

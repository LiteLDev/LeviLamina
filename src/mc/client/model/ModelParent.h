#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

struct ModelParent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6db08;
    ::ll::UntypedStorage<8, 48> mUnk6f7b23;
    ::ll::UntypedStorage<8, 24> mUnkb28112;
    ::ll::UntypedStorage<1, 1>  mUnk6f3950;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelParent& operator=(ModelParent const&);
    ModelParent(ModelParent const&);
    ModelParent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ModelParent(
        ::HashedString const&     parentName,
        ::Json::Value&            value,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFilePathWithExtension,
        bool                      isFromBaseGamePack
    );

    MCNAPI_C ~ModelParent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::HashedString const&     parentName,
        ::Json::Value&            value,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFilePathWithExtension,
        bool                      isFromBaseGamePack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

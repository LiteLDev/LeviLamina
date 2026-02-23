#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/JsonValueHierarchy.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

struct ModelParent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mSourceFilePathWithExtension;
    ::ll::TypedStorage<8, 48, ::HashedString>       mParentName;
    ::ll::TypedStorage<8, 24, ::JsonValueHierarchy> mJson;
    ::ll::TypedStorage<1, 1, bool>                  mIsFromBaseGamePack;
    // NOLINTEND

public:
    // prevent constructor by default
    ModelParent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModelParent(
        ::HashedString const&     parentName,
        ::Json::Value&            value,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      sourceFilePathWithExtension,
        bool                      isFromBaseGamePack
    );

    MCAPI ~ModelParent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};

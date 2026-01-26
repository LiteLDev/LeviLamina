#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class JsonValueHierarchyNode;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class JsonValueHierarchy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk70010e;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonValueHierarchy& operator=(JsonValueHierarchy const&);
    JsonValueHierarchy(JsonValueHierarchy const&);
    JsonValueHierarchy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Json::Value const& get(::std::string const& name) const;

    MCNAPI_C ::Json::Value const&
    get(::std::string const& name, ::SemVersion const& requiredMinimumFormatVersion) const;

    MCNAPI_C ::Json::Value const& get(::std::string const& owningFieldName, ::std::string const& subFieldName) const;

    MCNAPI_C ::SemVersion const& getFormatVersion() const;

    MCNAPI_C ::std::vector<::JsonValueHierarchyNode> getMemberArray(::std::string const& name) const;

    MCNAPI_C ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI_C void pushEmptyNode();

    MCNAPI_C void push_back(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      fileName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::JsonValueHierarchy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

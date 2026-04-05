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
    ::ll::UntypedStorage<8, 24> mUnk21f130;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    JsonValueHierarchy& operator=(JsonValueHierarchy const&);
    JsonValueHierarchy(JsonValueHierarchy const&);
    JsonValueHierarchy();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    JsonValueHierarchy& operator=(JsonValueHierarchy const&);
    JsonValueHierarchy();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI JsonValueHierarchy(::JsonValueHierarchy const&);

    MCNAPI ::Json::Value const& get(::std::string const& name) const;

    MCNAPI ::Json::Value const& get(::std::string const& name, ::SemVersion const& requiredMinimumFormatVersion) const;

    MCNAPI ::Json::Value const& get(::std::string const& owningFieldName, ::std::string const& subFieldName) const;

    MCNAPI ::SemVersion const& getFormatVersion() const;

    MCNAPI ::std::vector<::JsonValueHierarchyNode> getMemberArray(::std::string const& name) const;

    MCNAPI ::MinEngineVersion const& getMinEngineVersion() const;

    MCNAPI ::Json::Value const& operator[](::std::string const& name) const;

    MCNAPI void pushEmptyNode();

    MCNAPI void push_back(
        ::Json::Value&            value,
        ::SemVersion const&       formatVersion,
        ::MinEngineVersion const& minEngineVersion,
        ::std::string const&      fileName
    );

    MCNAPI ~JsonValueHierarchy();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::JsonValueHierarchy const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

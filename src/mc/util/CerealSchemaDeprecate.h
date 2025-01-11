#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CerealSchemaUpgrade.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

class CerealSchemaDeprecate : public ::CerealSchemaUpgrade {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk8bda53;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealSchemaDeprecate& operator=(CerealSchemaDeprecate const&);
    CerealSchemaDeprecate(CerealSchemaDeprecate const&);
    CerealSchemaDeprecate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&) const /*override*/;

    // vIndex: 2
    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const /*override*/;

    // vIndex: 0
    virtual ~CerealSchemaDeprecate() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CerealSchemaDeprecate(
        ::SemVersion         deprecateVersion,
        ::std::string const& schemaKey,
        ::std::string const& jsonMemberName
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SemVersion deprecateVersion, ::std::string const& schemaKey, ::std::string const& jsonMemberName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $previousSchema(::rapidjson::GenericValue<
                                ::rapidjson::UTF8<char>,
                                ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&) const;

    MCAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

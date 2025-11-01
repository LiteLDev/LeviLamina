#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
class SemVersion;
namespace Core { class Path; }
namespace cereal { struct Schema; }
// clang-format on

class CerealDocumentUpgrader {
public:
    // CerealDocumentUpgrader inner types define
    enum class ParseAndUpgradeResult : int {
        Failure               = 0,
        SuccessWithChanges    = 1,
        SuccessWithoutChanges = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk34f8f2;
    ::ll::UntypedStorage<8, 24> mUnkd5595a;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealDocumentUpgrader& operator=(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CerealDocumentUpgrader(::SemVersion terminus);

    MCNAPI void clear();

    MCNAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult parseJsonAndUpgrade(
        ::std::string const& json,
        ::SemVersion&        outDocumentVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&                   document,
        ::Core::Path const&                               resourceName,
        bool                                              allowMissingVersionAsZero,
        ::std::optional<::SemVersion> const&              minVersion,
        ::std::function<bool(::SemVersion const&)> const& shouldUpgrade
    ) const;

    MCNAPI void registerUpgrade(::std::shared_ptr<::CerealSchemaUpgrade> upgrade);

    MCNAPI bool upgradeJson(
        ::std::string& json,
        ::SemVersion&  outDocumentVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&                   document,
        ::Core::Path const&                               resourceName,
        ::std::optional<::SemVersion> const&              minVersion,
        ::std::function<bool(::SemVersion const&)> const& shouldUpgrade
    ) const;

    MCNAPI ~CerealDocumentUpgrader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getVersion(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator> const& document
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion terminus);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

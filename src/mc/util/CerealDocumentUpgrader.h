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
    ::ll::UntypedStorage<8, 24> mUnk26485c;
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
        ::SemVersion& outDocumentVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&      document,
        ::std::string const&                 json,
        ::Core::Path const&                  resourceName,
        bool                                 allowMissingVersionAsZero,
        bool                                 betaApis,
        ::std::optional<::SemVersion> const& minVersion
    ) const;

    MCNAPI bool parseUpgradeAndStringifyJsonString(
        ::std::string& json,
        ::SemVersion&  outDocumentVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&      document,
        ::Core::Path const&                  resourceName,
        bool                                 betaApis,
        ::std::optional<::SemVersion> const& minVersion
    ) const;

    MCNAPI void registerUpgrade(::std::shared_ptr<::CerealSchemaUpgrade> upgrade);

    MCNAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult upgradeJsonDocument(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentVersion
    ) const;
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

    MCNAPI static ::std::pair<
        ::SemVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>>
    parseDocument(::std::string_view json, bool allowMissingVersionAsZero, bool logRapidjsonErrors);

    MCNAPI static ::rapidjson::GenericStringBuffer<::rapidjson::UTF8<char>, ::rapidjson::CrtAllocator> stringify(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& document
    );

    MCNAPI static bool validateParsedVersion(
        ::SemVersion const&                  documentVersion,
        ::std::optional<::SemVersion> const& minVersion,
        bool                                 betaApis
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion terminus);
    // NOLINTEND
};

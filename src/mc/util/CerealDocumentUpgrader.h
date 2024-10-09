#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class CerealDocumentUpgrader {
public:
    // CerealDocumentUpgrader inner types define
    enum class ParseAndUpgradeResult {};

public:
    // prevent constructor by default
    CerealDocumentUpgrader& operator=(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader();

public:
    // NOLINTBEGIN
    MCAPI explicit CerealDocumentUpgrader(class SemVersion terminus);

    MCAPI void clear();

    MCAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult parseJsonAndUpgrade(
        std::string const& json,
        class SemVersion&  outDocumentVersion,
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&                       document,
        class Core::Path const&                             resourceName,
        bool                                                allowMissingVersionAsZero,
        std::optional<class SemVersion> const&              minVersion,
        std::function<bool(class SemVersion const&)> const& shouldUpgrade
    ) const;

    MCAPI void registerUpgrade(std::shared_ptr<class CerealSchemaUpgrade> upgrade);

    MCAPI bool upgradeJson(
        std::string&      json,
        class SemVersion& outDocumentVersion,
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&                       document,
        class Core::Path const&                             resourceName,
        std::optional<class SemVersion> const&              minVersion,
        std::function<bool(class SemVersion const&)> const& shouldUpgrade
    ) const;

    MCAPI ~CerealDocumentUpgrader();

    MCAPI static std::string getVersion(rapidjson::GenericDocument<
                                        rapidjson::UTF8<char>,
                                        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                                        rapidjson::CrtAllocator> const& document);

    // NOLINTEND
};

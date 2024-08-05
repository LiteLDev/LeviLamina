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
    MCAPI explicit CerealDocumentUpgrader(class SemVersion);

    MCAPI void clear();

    MCAPI ::
        CerealDocumentUpgrader::
            ParseAndUpgradeResult
            parseJsonAndUpgrade(std::string const&, class SemVersion&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class Core::Path const&, bool, std::optional<class SemVersion> const&, std::function<bool(class SemVersion const&)> const&)
                const;

    MCAPI void registerUpgrade(std::shared_ptr<class CerealSchemaUpgrade>);

    MCAPI bool
    upgradeJson(std::string&, class SemVersion&, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, class Core::Path const&, std::optional<class SemVersion> const&, std::function<bool(class SemVersion const&)> const&)
        const;

    MCAPI ~CerealDocumentUpgrader();

    MCAPI static std::string getVersion(rapidjson::GenericDocument<
                                        rapidjson::UTF8<char>,
                                        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
                                        rapidjson::CrtAllocator> const&);

    // NOLINTEND
};

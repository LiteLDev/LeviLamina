#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CerealDocumentUpgradeStep {
public:
    // prevent constructor by default
    CerealDocumentUpgradeStep& operator=(CerealDocumentUpgradeStep const&);
    CerealDocumentUpgradeStep();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CerealDocumentUpgradeStep();

    MCAPI CerealDocumentUpgradeStep(class CerealDocumentUpgradeStep const&);

    MCAPI explicit CerealDocumentUpgradeStep(class SemVersion const&);

    MCAPI void addUpgrade(std::shared_ptr<class CerealSchemaUpgrade>);

    MCAPI bool
    apply(rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>& document, class SemVersion const&)
        const;

    MCAPI bool canUpgrade(class SemVersion const& version) const;

    MCAPI class SemVersion const& getTargetVersion() const;

    // NOLINTEND
};

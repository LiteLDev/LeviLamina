#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SubClientId.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class UserEntityIdentifierComponent {
public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&);
    UserEntityIdentifierComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0UserEntityIdentifierComponent@@QEAA@$$QEAV0@@Z
    MCAPI UserEntityIdentifierComponent(class UserEntityIdentifierComponent&&);

    // symbol:
    // ??0UserEntityIdentifierComponent@@QEAA@AEBVNetworkIdentifier@@W4SubClientId@@VUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@6@@Z
    MCAPI UserEntityIdentifierComponent(
        class NetworkIdentifier const&,
        ::SubClientId clientSubId,
        class mce::UUID,
        std::string const&,
        std::unique_ptr<class Certificate> certificate
    );

    // symbol: ?isPrimaryClient@UserEntityIdentifierComponent@@QEBA_NXZ
    MCAPI bool isPrimaryClient() const;

    // symbol: ??4UserEntityIdentifierComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent&& other);

    // symbol: ??1UserEntityIdentifierComponent@@QEAA@XZ
    MCAPI ~UserEntityIdentifierComponent();

    // symbol: ?tryGetFromEntity@UserEntityIdentifierComponent@@SAPEAV1@AEAVEntityContext@@@Z
    MCAPI static class UserEntityIdentifierComponent* tryGetFromEntity(class EntityContext& entity);

    // NOLINTEND
};

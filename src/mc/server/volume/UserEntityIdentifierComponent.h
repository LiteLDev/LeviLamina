#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class UserEntityIdentifierComponent {

public:
    // prevent constructor by default
    UserEntityIdentifierComponent& operator=(UserEntityIdentifierComponent const&) = delete;
    UserEntityIdentifierComponent(UserEntityIdentifierComponent const&)            = delete;
    UserEntityIdentifierComponent()                                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0UserEntityIdentifierComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI UserEntityIdentifierComponent(class UserEntityIdentifierComponent&&);
    /**
     * @symbol
     * ??0UserEntityIdentifierComponent\@\@QEAA\@AEBVNetworkIdentifier\@\@W4SubClientId\@\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCertificate\@\@U?$default_delete\@VCertificate\@\@\@std\@\@\@6\@\@Z
     */
    MCAPI
    UserEntityIdentifierComponent(class NetworkIdentifier const&, enum class SubClientId, class mce::UUID, std::string const&, std::unique_ptr<class Certificate>);
    /**
     * @symbol ?isPrimaryClient\@UserEntityIdentifierComponent\@\@QEBA_NXZ
     */
    MCAPI bool isPrimaryClient() const;
    /**
     * @symbol ??4UserEntityIdentifierComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class UserEntityIdentifierComponent& operator=(class UserEntityIdentifierComponent&&);
    /**
     * @symbol ??1UserEntityIdentifierComponent\@\@QEAA\@XZ
     */
    MCAPI ~UserEntityIdentifierComponent();
    /**
     * @symbol ?tryGetFromEntity\@UserEntityIdentifierComponent\@\@SAPEAV1\@AEAVEntityContext\@\@\@Z
     */
    MCAPI static class UserEntityIdentifierComponent* tryGetFromEntity(class EntityContext&);
    /**
     * @symbol ?tryGetFromEntity\@UserEntityIdentifierComponent\@\@SAPEBV1\@AEBVEntityContext\@\@\@Z
     */
    MCAPI static class UserEntityIdentifierComponent const* tryGetFromEntity(class EntityContext const&);
    // NOLINTEND
};

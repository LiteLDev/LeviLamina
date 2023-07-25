#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class MountTameableDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOUNTTAMEABLEDEFINITION
public:
    MountTameableDefinition& operator=(MountTameableDefinition const&) = delete;
    MountTameableDefinition(MountTameableDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0MountTameableDefinition\@\@QEAA\@XZ
     */
    MCAPI MountTameableDefinition();
    /**
     * @symbol ?initialize\@MountTameableDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMountTamingComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class MountTamingComponent&) const;
    /**
     * @symbol
     * ?buildSchema\@MountTameableDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMountTameableDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(class std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MountTameableDefinition>>&);
};

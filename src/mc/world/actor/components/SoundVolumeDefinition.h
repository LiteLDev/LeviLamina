#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct SoundVolumeDefinition {

public:
    // prevent constructor by default
    SoundVolumeDefinition& operator=(SoundVolumeDefinition const&) = delete;
    SoundVolumeDefinition(SoundVolumeDefinition const&)            = delete;
    SoundVolumeDefinition()                                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?buildSchema\@SoundVolumeDefinition\@\@SAXAEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@USoundVolumeDefinition\@\@\@JsonUtil\@\@\@std\@\@\@Z
     */
    MCAPI static void
    buildSchema(std::shared_ptr<
                class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct SoundVolumeDefinition>>&);
    /**
     * @symbol ?initialize\@SoundVolumeDefinition\@\@QEBAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&) const;
    // NOLINTEND
};

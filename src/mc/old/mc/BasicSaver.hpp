/**
 * @file  BasicSaver.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BasicSaver.
 *
 */
class BasicSaver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASICSAVER
public:
    class BasicSaver& operator=(class BasicSaver const &) = delete;
    BasicSaver(class BasicSaver const &) = delete;
    BasicSaver() = delete;
#endif

public:

//private:
    /**
     * @symbol  ?saveImpl\@BasicSaver\@\@AEAA_NAEAUSchemaWriter\@reflection\@\@Umeta_handle\@entt\@\@AEBVBasicSchema\@internal\@3\@\@Z
     */
    MCAPI bool saveImpl(struct reflection::SchemaWriter &, struct entt::meta_handle, class reflection::internal::BasicSchema const &);

private:

};
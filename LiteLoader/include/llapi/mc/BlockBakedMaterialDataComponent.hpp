/**
 * @file  MC/BlockBakedMaterialDataComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockBakedMaterialDataComponent.
 *
 */
struct BlockBakedMaterialDataComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBAKEDMATERIALDATACOMPONENT
public:
    struct BlockBakedMaterialDataComponent& operator=(struct BlockBakedMaterialDataComponent const &) = delete;
    BlockBakedMaterialDataComponent(struct BlockBakedMaterialDataComponent const &) = delete;
    BlockBakedMaterialDataComponent() = delete;
#endif

public:
    /**
     * @hash   -1122304510
     * @symbol ?isSolidOpaque@BlockBakedMaterialDataComponent@@QEBA_NXZ
     */
    MCAPI bool isSolidOpaque() const;
    /**
     * @hash   -586302532
     * @symbol ??4BlockBakedMaterialDataComponent@@QEAAAEAU0@$$QEAU0@@Z
     */
    MCAPI struct BlockBakedMaterialDataComponent & operator=(struct BlockBakedMaterialDataComponent &&);

};
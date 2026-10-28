#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

enum class ContainerActionType : int {
    None                              = 0,
    CloseContainer                    = 1,
    TakeAllItems                      = 2,
    TakeHalfItems                     = 3,
    TakeOneItem                       = 4,
    PlaceAllItems                     = 5,
    PlaceAmountOfItems                = 6,
    PlaceOneItem                      = 7,
    GatherAllOrQuickMoveItems         = 8,
    QuickMoveItems                    = 9,
    StartDrawingItems                 = 10,
    PlaceOneThenStartDrawingItems     = 11,
    StartDistributingItems            = 12,
    TakeOneThenStartDistributingItems = 13,
    DrawItems                         = 14,
    DistributeItems                   = 15,
    DropAllItems                      = 16,
    DropAmountOfItems                 = 17,
    DropOneItem                       = 18,
    CraftThenQuickMoveItem            = 19,
    TakeTopBundleItem                 = 20,
    TakeItemInBundle                  = 21,
    PutItemInBundle                   = 22,
    SelectRecipe                      = 23,
    DeselectRecipe                    = 24,
    CraftSelectedRecipeOnce           = 25,
    CraftSelectedRecipeMax            = 26,
};

}

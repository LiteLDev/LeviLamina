#include <cstdint>

enum class ContainerType : char {
    INVENTORY              = -1,
    NONE                   = -9,
    CONTAINER              = 0,
    WORKBENCH              = 1,
    FURNACE                = 2,
    ENCHANTMENT            = 3,
    BREWING_STAND          = 4,
    ANVIL                  = 5,
    DISPENSER              = 6,
    DROPPER                = 7,
    HOPPER                 = 8,
    CAULDRON               = 9,
    MINECART_CHEST         = 10,
    MINECART_HOPPER        = 11,
    HORSE                  = 12,
    TRADE                  = 15, // NotGenerated
    MINECART_COMMAND_BLOCK = 16,
    JUKEBOX                = 17,
    COMPOUND_CREATOR       = 20,
    ELEMENT_CONSTRUCTOR    = 21,
    MATERIAL_REDUCER       = 22,
    LAB_TABLE              = 23,
    BLAST_FURNACE          = 27,
    SMOKER                 = 28,
    STONECUTTER            = 29,
    HUD                    = 31,
    SMITHING_TABLE         = 33,
};

enum class GameType : int { GameTypeSurvival = 0, GameTypeCreative = 1, GameTypeAdventure = 2, GameTypeSpectator = 6 };

enum class Difficulty : int { DifficultyPeaceful = 0, DifficultyEasy = 1, DifficultyNormal = 2, DifficultyHard = 3 };

enum class PlayerPermissionLevel : int {
    PlayerPermissionLevelVisitor  = 0,
    PlayerPermissionLevelMember   = 1,
    PlayerPermissionLevelOperator = 2,
    PlayerPermissionLevelCustom   = 3
};

enum class CommandPermissionLevel : char {
    Any         = 0,
    GameMasters = 1,
    Admin       = 2,
    HostPlayer  = 3,
    Console     = 4,
    Internal    = 5,
};

enum class OriginType : char {
    Player             = 0,
    Block              = 1,
    MinecartBlock      = 2,
    DevConsole         = 3,
    Test               = 4,
    AutomationPlayer   = 5,
    ClientAutomation   = 6,
    Server             = 7,
    Actor              = 8,
    Virtual            = 9,
    GameArgument       = 10,
    ActorServer        = 11,
    Precompiled        = 12,
    GameDirectorEntity = 13,
    Script             = 14,
    ExecuteContext     = 15,

    DedicatedServer = 7, // Server
};

enum class CommandParameterDataType {
    NORMAL,
    ENUM,
    SOFT_ENUM,
    POSIFIX,
};

enum class SemanticConstraint : unsigned char {
    NoneConstraint              = 0,
    RequiresCheatsEnabled       = 1,
    RequiresElevatedPermissions = 2,
    RequiresHostPermissions     = 4,
    VALUE_MASK                  = 8,
};

enum class CommandParameterOption : unsigned char {
    None                      = 0,
    EnumAutocompleteExpansion = 1,
    HasSemanticConstraint     = 2, // be used in block or item name enum
    EnumAsChainedCommand      = 4, // be used in NewExecuteCommand
};

enum class UpdateBlockLayer : int { UpdateBlockDefault, UpdateBlockLiquid };

enum class UpdateBlockFlags : int {
    UpdateBlockNone        = 0,
    BlockUpdateNeighbors   = 1,
    BlockUpdateNetwork     = 2,
    BlockUpdateAll         = 3, // default value in BDS
    BlockUpdateNoGraphic   = 4,
    BlockUpdatePriority    = 8,
    BlockUpdateAllPriority = 11
    // old one not correctly ?
    // BlockUpdateNeighbours = 1,
    // BlockUpdateNetwork = 2,
    // BlockUpdateNoGraphics = 3,
    // BlockUpdatePriority = 4,
};

enum class TextType : char {
    RAW           = 0,
    CHAT          = 1,
    TRANSLATION   = 2,
    POPUP         = 3,
    JUKEBOX_POPUP = 4,
    TIP           = 5,
    SYSTEM        = 6,
    WHISPER       = 7,
    ANNOUNCEMENT  = 8,
    JSON_WHISPER  = 9,
    JSON          = 10
};

/**
 * @brief The title type
 *
 */
enum class TitleType : int {
    Clear = 0,
    Reset = 1,

    /**
     * @brief The main title
     *
     */
    SetTitle = 2,

    /**
     * @brief The subtitle
     *
     */
    SetSubtitle = 3,

    /**
     * @brief The actionbar title
     *
     */
    SetActionBar = 4,

    SetDurations        = 5,
    TitleTextObject     = 6,
    SubtitleTextObject  = 7,
    ActionbarTextObject = 8
};

enum class BossEvent : int {
    Show                    = 0,
    RegisterPlayer          = 1,
    Hide                    = 2,
    UnregisterPlayer        = 3,
    HealthPercentage        = 4,
    Title                   = 5,
    AppearanceProperties    = 6,
    Texture                 = 7,
    ResendRaidBossEventData = 8,
};

enum class BossEventColour : int { Grey = 0, Blue = 1, Red = 2, Green = 3, Yellow = 4, Purple = 5, White = 6 };

enum class ContainerEnumName : int8_t {
    AnvilInputContainer                 = 0,
    AnvilMaterialContainer              = 1,
    AnvilResultPreviewContainer         = 2,
    SmithingTableInputContainer         = 3,
    SmithingTableMaterialContainer      = 4,
    SmithingTableResultPreviewContainer = 5,
    ArmorContainer                      = 6,
    LevelEntityContainer                = 7,
    BeaconPaymentContainer              = 8,
    BrewingStandInputContainer          = 9,
    BrewingStandResultContainer         = 10,
    BrewingStandFuelContainer           = 11,
    CombinedHotbarAndInventoryContainer = 12,
    CraftingInputContainer              = 13,
    CraftingOutputPreviewContainer      = 14,
    RecipeConstructionContainer         = 15,
    RecipeNatureContainer               = 16,
    RecipeItemsContainer                = 17,
    RecipeSearchContainer               = 18,
    RecipeSearchBarContainer            = 19,
    RecipeEquipmentContainer            = 20,
    EnchantingInputContainer            = 21,
    EnchantingMaterialContainer         = 22,
    FurnaceFuelContainer                = 23,
    FurnaceIngredientContainer          = 24,
    FurnaceResultContainer              = 25,
    HorseEquipContainer                 = 26,
    HotbarContainer                     = 27,
    InventoryContainer                  = 28,
    ShulkerBoxContainer                 = 29,
    TradeIngredient1Container           = 30,
    TradeIngredient2Container           = 31,
    TradeResultPreviewContainer         = 32,
    OffhandContainer                    = 33,
    CompoundCreatorInput                = 34,
    CompoundCreatorOutputPreview        = 35,
    ElementConstructorOutputPreview     = 36,
    MaterialReducerInput                = 37,
    MaterialReducerOutput               = 38,
    LabTableInput                       = 39,
    LoomInputContainer                  = 40,
    LoomDyeContainer                    = 41,
    LoomMaterialContainer               = 42,
    LoomResultPreviewContainer          = 43,
    BlastFurnaceIngredientContainer     = 44,
    SmokerIngredientContainer           = 45,
    Trade2Ingredient1Container          = 46,
    Trade2Ingredient2Container          = 47,
    Trade2ResultPreviewContainer        = 48,
    GrindstoneInputContainer            = 49,
    GrindstoneAdditionalContainer       = 50,
    GrindstoneResultPreviewContainer    = 51,
    StonecutterInputContainer           = 52,
    StonecutterResultPreviewContainer   = 53,
    CartographyInputContainer           = 54,
    CartographyAdditionalContainer      = 55,
    CartographyResultPreviewContainer   = 56,
    BarrelContainer                     = 57,
    CursorContainer                     = 58,
    CreatedOutputContainer              = 59
};

enum class ParticleType {
    dragondestroyblock    = 0x40,
    none                  = 0x00,
    bubble                = 0x01,
    bubblemanual          = 0x02,
    crit                  = 0x03,
    blockforcefield       = 0x04,
    smoke                 = 0x05,
    explode               = 0x06,
    evaporation           = 0x07,
    flame                 = 0x08,
    candleflame           = 0x09,
    lava                  = 0x0a,
    largesmoke            = 0x0b,
    reddust               = 0x0c,
    risingborderdust      = 0x0d,
    iconcrack             = 0x0e,
    snowballpoof          = 0x0f,
    largeexplode          = 0x10,
    hugeexplosion         = 0x11,
    mobflame              = 0x12,
    heart                 = 0x13,
    terrain               = 0x14,
    townaura              = 0x15,
    portal                = 0x16,
    watersplash           = 0x18,
    watersplashmanual     = 0x19,
    waterwake             = 0x1a,
    dripwater             = 0x1b,
    driplava              = 0x1c,
    driphoney             = 0x1d,
    stalactitedripwater   = 0x1e,
    stalactitedriplava    = 0x1f,
    fallingdust           = 0x20,
    mobspell              = 0x21,
    mobspellambient       = 0x22,
    mobspellinstantaneous = 0x23,
    ink                   = 0x24,
    slime                 = 0x25,
    rainsplash            = 0x26,
    villagerangry         = 0x27,
    villagerhappy         = 0x28,
    enchantingtable       = 0x29,
    trackingemitter       = 0x2a,
    note                  = 0x2b,
    witchspell            = 0x2c,
    carrotboost           = 0x2d,
    mobappearance         = 0x2e,
    endrod                = 0x2f,
    dragonbreath          = 0x30,
    spit                  = 0x31,
    totem                 = 0x32,
    food                  = 0x33,
    fireworksstarter      = 0x34,
    fireworks             = 0x35,
    fireworksoverlay      = 0x36,
    balloongas            = 0x37,
    coloredflame          = 0x38,
    sparkler              = 0x39,
    conduit               = 0x3a,
    bubblecolumnup        = 0x3b,
    bubblecolumndown      = 0x3c,
    sneeze                = 0x3d,
    shulkerbullet         = 0x3e,
    bleach                = 0x3f,
    myceliumdust          = 0x41,
    fallingborderdust     = 0x42,
    campfiresmoke         = 0x43,
    campfiresmoketall     = 0x44,
    dragonbreathfire      = 0x45,
    dragonbreathtrail     = 0x46,
    soul                  = 0x48,
    obsidiantear          = 0x49,
    portalreverse         = 0x4a,
    snowflake             = 0x4b,
    wax                   = 0x50,
    electricspark         = 0x51,
    shriek                = 0x52,
    sculksoul             = 0x53
};

enum class transactionType {
    NormalTransaction          = 0x00,
    InventoryMismatch          = 0x01,
    ItemUseTransaction         = 0x02,
    ItemUseOnEntityTransaction = 0x03,
    ItemReleaseTransaction     = 0x04
};

enum class ItemStackRequestActionType : char {
    Take                                     = 0x00,
    Place                                    = 0x01,
    Swap                                     = 0x02,
    Drop                                     = 0x03,
    Destroy                                  = 0x04,
    Consume                                  = 0x05,
    Create                                   = 0x06,
    PlaceInItemContainer                     = 0x07,
    TakeFromItemContainer                    = 0x08,
    ScreenLabTableCombine                    = 0x09,
    ScreenBeaconPayment                      = 0x0a,
    ScreenHUDMineBlock                       = 0x0b,
    CraftRecipe                              = 0x0c,
    CraftRecipeAuto                          = 0x0d,
    CraftCreative                            = 0x0e,
    CraftRecipeOptional                      = 0x0f,
    CraftRepairAndDisenchant                 = 0x10,
    CraftLoom                                = 0x11,
    CraftNonImplemented_DEPRECATEDASKTYLAING = 0x12,
    CraftResults_DEPRECATEDASKTYLAING        = 0x13,
};

/**
 * @brief Ranking method of the objective
 *
 */
enum class ObjectiveSortOrder : char {
    /**
     * @brief Ascending
     *
     */
    Ascending = 0,

    /**
     * @brief Descending
     *
     */
    Descending = 1
};

enum class PlayerScoreSetFunction : char { Set = 0, Add = 1, Remove = 2 };

enum class ContainerID : uint8_t {
    Invalid        = 0xff,
    Inventory      = 0,
    First          = 1,
    Last           = 100,
    Offhand        = 119,
    Armor          = 120,
    SelectionSlots = 122,
    PlayerUIOnly   = 124
};

enum class FaceID : char {
    Unknown = -1,
    Down    = 0,
    Up      = 1,
    North   = 2,
    South   = 3,
    West    = 4,
    East    = 5,
};

enum class MinecraftPacketIds : int {
    Login                             = 0x01,
    PlayStatus                        = 0x02,
    ServerToClientHandshake           = 0x03,
    ClientToServerHandshake           = 0x04,
    Disconnect                        = 0x05,
    ResourcePacksInfo                 = 0x06,
    ResourcePackStack                 = 0x07,
    ResourcePackClientResponse        = 0x08,
    Text                              = 0x09,
    SetTime                           = 0x0A,
    StartGame                         = 0x0B,
    AddPlayer                         = 0x0C,
    AddActor                          = 0x0D,
    RemoveActor                       = 0x0E,
    AddItemActor                      = 0x0F,
    TakeItemActor                     = 0x11,
    MoveActorAbsolute                 = 0x12,
    MovePlayer                        = 0x13,
    PassengerJump                     = 0x14,
    UpdateBlock                       = 0x15,
    AddPainting                       = 0x16,
    TickSync                          = 0x17,
    LevelSoundEventV1                 = 0x18,
    LevelEvent                        = 0x19,
    BlockEvent                        = 0x1A,
    ActorEvent                        = 0x1B,
    MobEffect                         = 0x1C,
    UpdateAttributes                  = 0x1D,
    InventoryTransaction              = 0x1E,
    MobEquipment                      = 0x1F,
    MobArmorEquipment                 = 0x20,
    Interact                          = 0x21,
    BlockPickRequest                  = 0x22,
    ActorPickRequest                  = 0x23,
    PlayerAction                      = 0x24,
    HurtArmor                         = 0x26,
    SetActorData                      = 0x27,
    SetActorMotion                    = 0x28,
    SetActorLink                      = 0x29,
    SetHealth                         = 0x2A,
    SetSpawnPosition                  = 0x2B,
    Animate                           = 0x2C,
    Respawn                           = 0x2D,
    ContainerOpen                     = 0x2E,
    ContainerClose                    = 0x2F,
    PlayerHotbar                      = 0x30,
    InventoryContent                  = 0x31,
    InventorySlot                     = 0x32,
    ContainerSetData                  = 0x33,
    CraftingData                      = 0x34,
    CraftingEvent                     = 0x35,
    GuiDataPickItem                   = 0x36,
    AdventureSettings                 = 0x37, // removed
    BlockActorData                    = 0x38,
    PlayerInput                       = 0x39,
    LevelChunk                        = 0x3A,
    SetCommandsEnabled                = 0x3B,
    SetDifficulty                     = 0x3C,
    ChangeDimension                   = 0x3D,
    SetPlayerGameType                 = 0x3E,
    PlayerList                        = 0x3F,
    SimpleEvent                       = 0x40,
    Event                             = 0x41,
    SpawnExperienceOrb                = 0x42,
    ClientboundMapItemData            = 0x43,
    MapInfoRequest                    = 0x44,
    RequestChunkRadius                = 0x45,
    ChunkRadiusUpdated                = 0x46,
    ItemFrameDropItem                 = 0x47,
    GameRulesChanged                  = 0x48,
    Camera                            = 0x49,
    BossEvent                         = 0x4A,
    ShowCredits                       = 0x4B,
    AvailableCommands                 = 0x4C,
    CommandRequest                    = 0x4D,
    CommandBlockUpdate                = 0x4E,
    CommandOutput                     = 0x4F,
    UpdateTrade                       = 0x50,
    UpdateEquip                       = 0x51,
    ResourcePackDataInfo              = 0x52,
    ResourcePackChunkData             = 0x53,
    ResourcePackChunkRequest          = 0x54,
    Transfer                          = 0x55,
    PlaySound                         = 0x56,
    StopSound                         = 0x57,
    SetTitle                          = 0x58,
    AddBehaviorTree                   = 0x59,
    StructureBlockUpdate              = 0x5A,
    ShowStoreOffer                    = 0x5B,
    PurchaseReceipt                   = 0x5C,
    PlayerSkin                        = 0x5D,
    SubClientLogin                    = 0x5E,
    AutomationClientConnect           = 0x5F,
    SetLastHurtBy                     = 0x60,
    BookEdit                          = 0x61,
    NpcRequest                        = 0x62,
    PhotoTransfer                     = 0x63,
    ModalFormRequest                  = 0x64,
    ModalFormResponse                 = 0x65,
    ServerSettingsRequest             = 0x66,
    ServerSettingsResponse            = 0x67,
    ShowProfile                       = 0x68,
    SetDefaultGameType                = 0x69,
    RemoveObjective                   = 0x6A,
    SetDisplayObjective               = 0x6B,
    SetScore                          = 0x6C,
    LabTable                          = 0x6D,
    UpdateBlockSynced                 = 0x6E,
    MoveActorDelta                    = 0x6F,
    SetScoreboardIdentity             = 0x70,
    SetLocalPlayerAsInitialized       = 0x71,
    UpdateSoftEnum                    = 0x72,
    NetworkStackLatency               = 0x73,
    ScriptCustomEvent                 = 0x75,
    SpawnParticleEffect               = 0x76,
    AvailableActorIdentifiers         = 0x77,
    LevelSoundEventV2                 = 0x78,
    NetworkChunkPublisherUpdate       = 0x79,
    BiomeDefinitionList               = 0x7A,
    LevelSoundEvent                   = 0x7B,
    LevelEventGeneric                 = 0x7C,
    LecternUpdate                     = 0x7D,
    AddEntity                         = 0x7F,
    RemoveEntity                      = 0x80,
    ClientCacheStatus                 = 0x81,
    OnScreenTextureAnimation          = 0x82,
    MapCreateLockedCopy               = 0x83,
    StructureTemplateDataRequest      = 0x84,
    StructureTemplateDataResponse     = 0x85,
    ClientCacheBlobStatus             = 0x87,
    ClientCacheMissResponse           = 0x88,
    EducationSettings                 = 0x89,
    Emote                             = 0x8A,
    MultiplayerSettings               = 0x8B,
    SettingsCommand                   = 0x8C,
    AnvilDamage                       = 0x8D,
    CompletedUsingItem                = 0x8E,
    NetworkSettings                   = 0x8F,
    PlayerAuthInput                   = 0x90,
    CreativeContent                   = 0x91,
    PlayerEnchantOptions              = 0x92,
    ItemStackRequest                  = 0x93,
    ItemStackResponse                 = 0x94,
    PlayerArmorDamage                 = 0x95,
    CodeBuilder                       = 0x96,
    UpdatePlayerGameType              = 0x97,
    EmoteList                         = 0x98,
    PositionTrackingDBServerBroadcast = 0x99,
    PositionTrackingDBClientRequest   = 0x9A,
    DebugInfo                         = 0x9B,
    PacketViolationWarning            = 0x9C,
    MotionPredictionHints             = 0x9D,
    AnimateEntity                     = 0x9E,
    CameraShake                       = 0x9F,
    PlayerFog                         = 0xA0,
    CorrectPlayerMovePrediction       = 0xA1,
    ItemComponent                     = 0xA2,
    FilterText                        = 0xA3,
    ClientboundDebugRenderer          = 0xA4,
    SyncActorProperty                 = 0xA5,
    AddVolumeEntity                   = 0xA6,
    RemoveVolumeEntity                = 0xA7,
    SimulationType                    = 0xA8,
    NpcDialogue                       = 0xA9,
    EduUriResource                    = 0xAA,
    CreatePhoto                       = 0xAB,
    UpdateSubChunkBlocks              = 0xAC,
    PhotoInfoRequest                  = 0xAD, // removed
    SubChunk                          = 0xAE,
    SubChunkRequest                   = 0xAF,
    PlayerStartItemCooldown           = 0xB0,
    ScriptMessage                     = 0xB1,
    CodeBuilderSource                 = 0xB2,
    TickingAreasLoadStatus            = 0xB3,
    DimensionData                     = 0xB4,
    AgentActionEvent                  = 0xB5,
    ChangeMobProperty                 = 0xB6,
    LessonProgress                    = 0xB7,
    RequestAbility                    = 0xB8,
    RequestPermissions                = 0xB9,
    ToastRequest                      = 0xBA,
    UpdateAbilities                   = 0xBB,
    UpdateAdventureSettings           = 0xBC,
    DeathInfo                         = 0xBD,
    EditorNetwork                     = 0xBE,
    FeatureRegistry                   = 0xBF,
    ServerStats                       = 0xC0,
    RequestNetworkSettings            = 0xC1,
    GameTestRequest                   = 0XC2,
    GameTestResults                   = 0xC3

};

enum class ItemStackNetResult : unsigned char {
    Success                                          = 0,
    Error                                            = 1,
    InvalidRequestActionType                         = 2,
    ActionRequestNotAllowed                          = 3,
    ScreenHandlerEndRequestFailed                    = 4,
    ItemRequestActionHandlerCommitFailed             = 5,
    InvalidRequestCraftActionType                    = 6,
    InvalidCraftRequest                              = 7,
    InvalidCraftRequestScreen                        = 8,
    InvalidCraftResult                               = 9,
    InvalidCraftResultIndex                          = 10,
    InvalidCraftResultItem                           = 11,
    InvalidItemNetId                                 = 12,
    MissingCreatedOutputContainer                    = 13,
    FailedToSetCreatedItemOutputSlot                 = 14,
    RequestAlreadyInProgress                         = 15,
    FailedToInitSparseContainer                      = 16,
    ResultTransferFailed                             = 17,
    ExpectedItemSlotNotFullyConsumed                 = 18,
    ExpectedAnywhereItemNotFullyConsumed             = 19,
    ItemAlreadyConsumedFromSlot                      = 20,
    ConsumedTooMuchFromSlot                          = 21,
    MismatchSlotExpectedConsumedItem                 = 22,
    MismatchSlotExpectedConsumedItemNetIdVariant     = 23,
    FailedToMatchExpectedSlotConsumedItem            = 24,
    FailedToMatchExpectedAllowedAnywhereConsumedItem = 25,
    ConsumedItemOutOfAllowedSlotRange                = 26,
    ConsumedItemNotAllowed                           = 27,
    PlayerNotInCreativeMode                          = 28,
    InvalidExperimentalRecipeRequest                 = 29,
    FailedToCraftCreative                            = 30,
    FailedToGetLevelRecipe                           = 31,
    FailedToFindRecipeByNetId                        = 32,
    MismatchedCraftingSize                           = 33,
    MissingInputSparseContainer                      = 34,
    MismatchedRecipeForInputGridItems                = 35,
    EmptyCraftResults                                = 36,
    FailedToEnchant                                  = 37,
    MissingInputItem                                 = 38,
    InsufficientPlayerLevelToEnchant                 = 39,
    MissingMaterialItem                              = 40,
    MissingActor                                     = 41,
    UnknownPrimaryEffect                             = 42,
    PrimaryEffectOutOfRange                          = 43,
    PrimaryEffectUnavailable                         = 44,
    SecondaryEffectOutOfRange                        = 45,
    SecondaryEffectUnavailable                       = 46,
    DstContainerEqualToCreatedOutputContainer        = 47,
    DstContainerAndSlotEqualToSrcContainerAndSlot    = 48,
    FailedToValidateSrcSlot                          = 49,
    FailedToValidateDstSlot                          = 50,
    InvalidAdjustedAmount                            = 51,
    InvalidItemSetType                               = 52,
    InvalidTransferAmount                            = 53,
    CannotSwapItem                                   = 54,
    CannotPlaceItem                                  = 55,
    UnhandledItemSetType                             = 56,
    InvalidRemovedAmount                             = 57,
    InvalidRegion                                    = 58,
    CannotDropItem                                   = 59,
    CannotDestroyItem                                = 60,
    InvalidSourceContainer                           = 61,
    ItemNotConsumed                                  = 62,
    InvalidNumCrafts                                 = 63,
    InvalidCraftResultStackSize                      = 64,
    CannotConsumeItem                                = 66,
    ScreenStackError                                 = 67,
};

// class CommandVersion {
// public:
//     int Min = 1, Max = 0x7FFFFFFF;
// };

enum class ClientPlayMode {
    Normal              = 0,
    Teaser              = 1,
    Screen              = 2,
    Viewer              = 3,
    VR                  = 4,
    Placement           = 5,
    LivingRoom          = 6,
    ExitLevel           = 7,
    ExitLevelLivingRoom = 8
};

enum class InputMode { Mouse = 1, Touch = 2, GamePad = 3, MotionController = 4 };

enum class InventoryTransactionError {
    Unknown            = 0,
    NoError            = 1,
    BalanceMismatch    = 2,
    SourceItemMismatch = 3,
    InventoryMismatch  = 4,
    SizeMismatch       = 5,
    AuthorityMismatch  = 6,
    StateMismatch      = 7,
    ApiDenied          = 8
};

enum class InventorySourceType {
    Invalid                = -1,
    Container              = 0,
    Global                 = 1,
    World                  = 2,
    Creative               = 3,
    UntrackedInteractionUI = 100,
    NONIMPLEMENTEDTODO     = 99999
};

enum class Mirror : unsigned char {
    None_15 = 0,
    X,
    Z,
    XZ,
};
enum class Rotation : unsigned char {
    None_14 = 0,
    Rotate90,
    Rotate180,
    Rotate270,
    Total,
};

enum class EquipmentSlot : int {
    _none          = 0xFF,
    _begin         = 0x0,
    _handSlot      = 0x0,
    Mainhand       = 0x0,
    Offhand        = 0x1,
    _armorSlot     = 0x2,
    Head           = 0x2,
    Torso          = 0x3,
    Legs           = 0x4,
    Feet           = 0x5,
    _containerSlot = 0x6,
    Hotbar         = 0x6,
    Inventory      = 0x7,
    EnderChest     = 0x8,
    Saddle         = 0x9,
    EntityArmor    = 0xA,
    Chest          = 0xB,
    _count         = 0xC,
};

enum class CommandOperator : unsigned char {
    Invalid      = 0x0,
    Equals       = 0x1,
    PlusEquals   = 0x2,
    MinusEquals  = 0x3,
    TimesEquals  = 0x4,
    DivideEquals = 0x5,
    ModEquals    = 0x6,
    MinEquals    = 0x7,
    MaxEquals    = 0x8,
    Swap         = 0x9,
};

enum class ActorLocation : int {
    Feet              = 0x0,
    Body              = 0x1,
    WeaponAttachPoint = 0x2,
    Head              = 0x3,
    DropAttachPoint   = 0x4,
    ExplosionPoint    = 0x5,
    Eyes              = 0x6,
    BreathingPoint    = 0x7,
    Mouth             = 0x8,
};

enum class StreamReadResult : int {
    Malformed = 0x0,
    Valid     = 0x1,
};

enum class BossEventUpdateType {
    BossEventShow = 0,
    // BossEventRegisterPlayer is sent by the client to the server to request being shown the boss bar.
    BossEventRegisterPlayer = 1,
    BossEventHide           = 2,
    // BossEventUnregisterPlayer is sent by the client to request the removal of the boss bar.
    BossEventUnregisterPlayer     = 3,
    BossEventHealthPercentage     = 4,
    BossEventTitle                = 5,
    BossEventAppearanceProperties = 6,
    BossEventTexture              = 7,
};

enum class BuildPlatform : int {
    Android      = 0x1,
    iOS          = 0x2,
    OSX          = 0x3,
    Amazon       = 0x4,
    GearVR       = 0x5,
    WIN10        = 0x7,
    Win32        = 0x8,
    Dedicated    = 0x9,
    PS4          = 0xB,
    Nx           = 0xC,
    Xbox         = 0xD,
    WindowsPhone = 0xE,
    Linux        = 0xF,
    Unknown      = 0xFF,
};

enum class AbilitiesIndex : int16_t {
    Build               = 0,
    Mine                = 1,
    DoorsAndSwitches    = 2,
    OpenContainers      = 3,
    AttackPlayers       = 4,
    AttackMobs          = 5,
    OperatorCommands    = 6,
    Teleport            = 7,
    ExposedAbilityCount = 8,
    Invulnerable        = 8,
    Flying              = 9,
    MayFly              = 10,
    Instabuild          = 11,
    Lightning           = 12,
    FlySpeed            = 13,
    WalkSpeed           = 14,
    Muted               = 15,
    WorldBuilder        = 16,
    NoClip              = 17,
    AbilityCount        = 18
};

enum class AdventureFlag : int {
    WorldImmutable = 1,
    NoPvM          = 2,
    NoMvP          = 4,
    Unused         = 8,
    ShowNameTags   = 16,
    AutoJump       = 32,
    AllowFlight    = 64,
    NoClip         = 128,
    WorldBuilder   = 256,
    Flying         = 512,
    Muted          = 1024,
};

enum class TargetSelectionMethod {
    Nearest = 0,
    Random  = 1,
};

enum class ActorDataIDs : unsigned short {
    FLAGS                     = 0,  // Int64
    HEALTH                    = 1,  // Int
    VARIANT                   = 2,  // Int
    COLOR                     = 3,  // Byte
    NAMETAG                   = 4,  // String
    OWNER                     = 5,  // Int64
    TARGET                    = 6,  // Int64
    AIR                       = 7,  // Short
    POTION_COLOR              = 8,  // Int (ARGB!)
    POTION_AMBIENT            = 9,  // Byte
    JUMP_DURATION             = 10, // Byte (not Int64?)
    HURT_TIME                 = 11, // Int (minecart/boat)
    HURT_DIRECTION            = 12, // Int (minecart/boat)
    PADDLE_TIME_LEFT          = 13, // Float
    PADDLE_TIME_RIGHT         = 14, // Float
    EXPERIENCE_VALUE          = 15, // Int (xp orb)
    DISPLAY_ITEM              = 16, // Byte    Int    CompoundTag
    HORSE_FLAGS               = 16, // Int, old
    WITHER_SKULL_IS_DANGEROUS = 16, // Byte, old
    MINECART_DISPLAY_OFFSET   = 17, // Int    Int64    Vec3
    ARROW_SHOOTER_ID          = 17, // Int64, old
    MINECART_HAS_DISPLAY      = 18, // Byte    Int64
    HORSE_TYPE                = 19, // Byte
    SWELL                     = 19, // old
    OLD_SWELL                 = 20, // old
    SWELL_DIR                 = 21, // old
    CHARGE_AMOUNT             = 22, // Byte
    ENDERMAN_HELD_RUNTIME_ID  = 23, // Int, (not Short?)
    ACTOR_AGE                 = 24, // Byte, (not Short?)
    // UNKNOWN_25                          = 25,  // 25 Byte Int
    PLAYER_FLAGS                       = 26, // Byte
    PLAYER_INDEX                       = 27, // Int
    PLAYER_BED_POSITION                = 28, // BlockPos
    FIREBALL_POWER_X                   = 29, // Float
    FIREBALL_POWER_Y                   = 30, // Float
    FIREBALL_POWER_Z                   = 31, // Float
    AUX_POWER                          = 32, // old
    FISH_X                             = 33, // old
    FISH_Z                             = 34, // old
    FISH_ANGLE                         = 35, // old
    POTION_AUX_VALUE                   = 36, // Short
    LEAD_HOLDER                        = 37, // Int64
    SCALE                              = 38, // Float
    INTERACTIVE_TAG                    = 39, // Byte, (not String?)
    NPC_SKIN_ID                        = 40, // String
    URL_TAG                            = 41, // String
    MAX_AIR                            = 42, // Short
    MARK_VARIANT                       = 43, // Int
    CONTAINER_TYPE                     = 44, // Byte
    CONTAINER_BASE_SIZE                = 45, // Int
    CONTAINER_EXTRA_SLOTS_PER_STRENGTH = 46, // Int
    BLOCK_TARGET                       = 47, // BlockPos (ENDER CRYSTAL)
    WITHER_INVULNERABLE_TICKS          = 48, // Int
    WITHER_TARGET_1                    = 49, // Int64
    WITHER_TARGET_2                    = 50, // Int64
    WITHER_TARGET_3                    = 51, // Int64
    AERIAL_ATTACK                      = 52, // Short
    BOUNDING_BOX_WIDTH                 = 53, // Float
    BOUNDING_BOX_HEIGHT                = 54, // Float
    FUSE_LENGTH                        = 55, // Int
    RIDER_SEAT_POSITION                = 56, // Vec3
    RIDER_ROTATION_LOCKED              = 57, // Byte
    RIDER_MAX_ROTATION                 = 58, // Float
    RIDER_MIN_ROTATION                 = 59, // Byte, (not Float?)
    // UNKNOWN_60                          = 60,  // Float
    AREA_EFFECT_CLOUD_RADIUS            = 61, // Float
    AREA_EFFECT_CLOUD_WAITING           = 62, // Int
    AREA_EFFECT_CLOUD_PARTICLE_ID       = 63, // Int
    SHULKER_PEEK_ID                     = 64, // Int
    SHULKER_ATTACH_FACE                 = 65, // Byte
    SHULKER_ATTACHED                    = 66, // Short
    SHULKER_ATTACH_POS                  = 67, // BlockPos
    TRADING_PLAYER_EID                  = 68, // Int64
    TRADING_CAREER                      = 69,
    HAS_COMMAND_BLOCK                   = 70, // Byte
    COMMAND_BLOCK_COMMAND               = 71, // String
    COMMAND_BLOCK_LAST_OUTPUT           = 72, // String
    COMMAND_BLOCK_TRACK_OUTPUT          = 73, // Byte
    CONTROLLING_RIDER_SEAT_NUMBER       = 74, // Byte
    STRENGTH                            = 75, // Int
    MAX_STRENGTH                        = 76, // Int
    SPELL_CASTING_COLOR                 = 77, // Int
    LIMITED_LIFE                        = 78, // Int
    ARMOR_STAND_POSE_INDEX              = 79, // Int
    ENDER_CRYSTAL_TIME_OFFSET           = 80, // Int
    ALWAYS_SHOW_NAMETAG                 = 81, // Byte
    COLOR_2                             = 82, // Byte
    NAME_AUTHOR                         = 83,
    SCORE_TAG                           = 84, // String
    BALLOON_ATTACHED_ENTITY             = 85, // Int64
    PUFFERFISH_SIZE                     = 86, // Byte
    BUBBLE_TIME                         = 87,
    AGENT                               = 88, // Int64
    SITTING_AMOUNT                      = 89, // Float
    SITTING_AMOUNT_PREVIOUS             = 90, // Float
    EATING_COUNTER                      = 91, // Int
    FLAGS_EXTENDED                      = 92, // Int64
    LAYING_AMOUNT                       = 93, // Float
    LAYING_AMOUNT_PREVIOUS              = 94, // Float
    DURATION                            = 95,
    SPAWN_TIME                          = 96,
    CHANGE_RATE                         = 97,
    CHANGE_ON_PICKUP                    = 98,
    PICKUP_COUNT                        = 99,
    INTERACT_TEXT                       = 100, // String
    TRADE_TIER                          = 101, // Int
    MAX_TRADE_TIER                      = 102, // Int
    TRADE_EXPERIENCE                    = 103, // Int
    SKIN_ID                             = 104, // Int
    SPAWNING_FRAMES                     = 105, // Int
    COMMAND_BLOCK_TICK_DELAY            = 106, // Int
    COMMAND_BLOCK_EXECUTE_ON_FIRST_TICK = 107, // Byte
    AMBIENT_SOUND_INTERVAL              = 108, // Float
    // UNKNOWN_109                         = 109, // Float
    // UNKNOWN_110                         = 110, // String
    // UNKNOWN_111                         = 111, // Float
    // UNKNOWN_112                         = 112, // String
    // UNKNOWN_113                         = 113, // Byte
    // UNKNOWN_114                         = 114, // Int
    // UNKNOWN_115                         = 115, // Int
    // UNKNOWN_116                         = 116, // Int
    // UNKNOWN_117                         = 117, // Int
    // UNKNOWN_118                         = 118, // CompoundTag
    // UNKNOWN_119                         = 119, // Byte
    // UNKNOWN_120                         = 120, // CompoundTag
    // UNKNOWN_121                         = 121, // Float
    // UNKNOWN_122                         = 122, // String
    // UNKNOWN_123                         = 123, // Int
    // UNKNOWN_124                         = 124, // String

    /*
    AMBIENT_SOUND_EVENT_NAME            = 109,
    FALL_DAMAGE_MULTIPLIER              = 110,
    NAME_RAW_TEXT                       = 111,
    CAN_RIDE_TARGET                     = 112,
    */
};

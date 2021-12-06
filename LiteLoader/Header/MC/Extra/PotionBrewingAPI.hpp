//Extra Part For PotionBrewing.hpp
#ifdef EXTRA_INCLUDE_PART_POTIONBREWING
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class Ingredient {
public:
    Ingredient() = delete;
    Ingredient(Ingredient const&) = delete;
    Ingredient(Ingredient const&&) = delete;
};
template <typename T0>
class Mix {
public:
    Mix() = delete;
    Mix(Mix const&) = delete;
    Mix(Mix const&&) = delete;
};

#endif

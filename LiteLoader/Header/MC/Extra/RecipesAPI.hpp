//Extra Part For Recipes.hpp
#ifdef EXTRA_INCLUDE_PART_RECIPES
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class Type {
public:
    Type() = delete;
    Type(Type const&) = delete;
    Type(Type const&&) = delete;
};
struct NormalizedRectangularRecipeResults {
    NormalizedRectangularRecipeResults() = delete;
    NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&) = delete;
    NormalizedRectangularRecipeResults(NormalizedRectangularRecipeResults const&&) = delete;
};

#endif

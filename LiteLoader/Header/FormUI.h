#pragma once
////////////////////////////////////////////////////////////////////////
//  Form UI Utility - Help you to build forms and options more easily
//
//  [Example - Simple Form]
//  - Form that contains several buttons (with optional image)
//  - Let the player to choose one option
// 
//  SimpleForm form("Welcome to shop","Choose what you want to do...");     // Initialize the form with title and content
//  form.addButton("Buy","textures/items/apple",                            // Add a button "Buy" with texture image      
//           [](Player* pl){ pl->sendText("To buy something...");} ),       // Buy's callback function
// 
//      .addButton("Sell","https://xxx.com/xxx.png",                        // Add a button "Sell" with online image     
//           [](Player* pl){ pl->sendText("To sell something...");} ),      // Sell's callback function
// 
//      .addButton("Settings","",                                           // Add a button "Settings" with no image
//           [](Player* pl){ pl->sendText("Get into settings...");} ),      // Settings's callback function
// 
//      .addButton("Exit")                                                  // Add a single button "Exit"
//      .sendTo(Level::getPlayer("Jim"));                   // Send the form to a player called "Jim"
// 
// 
//  [Example - Custom Form]
//  - Form that contains some kinds of elements (like input line, toggle, dropdown, ....)
//  - Let the player to provide some detailed information
// 
//  CustomForm form("Information Collection Form");                         // Initialize the form with title
//  form.addLabel("label1", "Personal Information")                         // Add a label shows "Personal Information"
//      .addInput("username", "Your Name")                                  // Add an input line to gather player's name
//      .addDropdown("sex", "Your Sex", {"Male","Female","Secret"})         // Add a dropdown to gather player's sex
//      .addSlider("age", "Your Age", 3, 100)                               // Add a slider to gather player's age
// 
//      .addLabel("label2", "MC Information")                               // Add a label shows "MC Information"
//      .addToggle("licensed","Purchased a licensed Minecraft?", true)      // Add a toggle about whether he buys a licensed mc or not
//      .addStepSlider("ability", "MC Ability", {"Beginner", "Experienced", "Master"})      // Add a step slider shows his game ability
// 
//      .sendTo(Level::getPlayer("John"),                                   // Send the form to a player called "John"
//          [](Player* player, auto& result)                                // Callback function to process the result
//      {
//          if(result.empty())                                              // He cancelled the form
//              return;
//          player->sendText("You have commited the form.");
//          player->sendFormattedText("Your name: {}", result["username"]->getString());
//          player->sendFormattedText("Your sex: {}", result["sex"]->getString());
//          player->sendFormattedText("Your age: {}", result["age"]->getNumber());
//          player->sendFormattedText("Your license: {}", result["licensed"]->getBool() ? "yes" : "no");
//          player->sendFormattedText("Your ability: {}:", result["ability"]->getString());
//      });
// 
// 
// Tips:  The key of map "result" equals the first argument "name" you pass to these elements
//         So, "name" must be *unique* or error will occur
// 
////////////////////////////////////////////////////////////////////////


#include <utility>
#include "../Global.h"

class ServerPlayer;
class Player;

namespace Form
{
//////////////////////////////// Simple Form Elements ////////////////////////////////

class SimpleFormElement
{
protected:
    virtual string serialize() = 0;

    friend class SimpleForm;
};

class Button : public SimpleFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using ButtonCallback = std::function<void(void)>;

    string text, image;
    ButtonCallback callback;

public:
    inline explicit Button(string text, string image = "", ButtonCallback callback = ButtonCallback())
        : text(std::move(text))
        , image(std::move(image))
        , callback(std::move(callback))
    {
    }

    inline void setText(const string& _text)
    {
        this->text = _text;
    }
    inline void setImage(const string& _image)
    {
        this->image = _image;
    }
    inline void setCallback(ButtonCallback _callback)
    {
        this->callback = std::move(_callback);
    }
};

//////////////////////////////// Custom Form Elements ////////////////////////////////

class CustomFormElement
{
protected:
    LIAPI virtual string serialize() = 0;

    friend class CustomForm;

public:
    enum class Type
    {
        Label,
        Input,
        Toggle,
        Dropdown,
        Slider,
        StepSlider
    };

    string name;
    Type type{};

    inline void setName(const string& _name)
    {
        this->name = _name;
    }
    inline virtual Type getType() = 0;
};

class Label : public CustomFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using DataType = void*;
    string text;

public:
    inline Label(const string& name, string text)
        : text(std::move(text))
    {
        setName(name);
    }

    inline Type getType() override
    {
        return Type::Label;
    }
    inline void setText(const string& _text)
    {
        this->text = _text;
    }
    inline DataType getData()
    {
        return nullptr;
    }
};

class Input : public CustomFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using DataType = std::string;
    string title, placeholder, def, data;

    inline Input(const string& name, string title, string placeholder = "", string def = "")
        : title(std::move(title))
        , placeholder(std::move(placeholder))
        , def(std::move(def))
    {
        setName(name);
    }

    inline Type getType() override
    {
        return Type::Input;
    }
    inline void setTitle(const string& _title)
    {
        this->title = _title;
    }
    inline void setPlaceHolder(const string& _placeholder)
    {
        this->placeholder = _placeholder;
    }
    inline void setDefault(const string& _def)
    {
        this->def = _def;
    }
    inline DataType getData() const
    {
        return data;
    }
};

class Toggle : public CustomFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using DataType = bool;
    string title;
    bool def, data{};

public:
    inline Toggle(const string& name, string title, bool def = false)
        : title(std::move(title))
        , def(def)
    {
        setName(name);
    }

    inline virtual Type getType() override
    {
        return Type::Toggle;
    }
    inline void setTitle(const string& _title)
    {
        this->title = _title;
    }
    inline void setDefault(bool _def)
    {
        this->def = _def;
    }
    inline DataType getData() const
    {
        return data;
    }
};

class Dropdown : public CustomFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using DataType = int;
    string title;
    vector<string> options;
    int def, data{};

public:
    inline Dropdown(const string& name, string title, const vector<string>& options, int defId = 0)
        : title(std::move(title))
        , options(options)
        , def(defId)
    {
        setName(name);
    }

    inline Type getType() override
    {
        return Type::Dropdown;
    }
    inline void setTitle(const string& _title)
    {
        this->title = _title;
    }
    inline void setOptions(const vector<string>& _options)
    {
        this->options = _options;
    }
    inline void addOption(const string& option)
    {
        options.push_back(option);
    }
    inline void setDefault(int defId)
    {
        this->def = defId;
    }
    inline DataType getData() const
    {
        return data;
    }
};

class Slider : public CustomFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using DataType = int;
    string title;
    int min, max, step, def, data{};

public:
    inline Slider(const string& name, string title, int min, int max, int step = 1, int def = 0)
        : title(std::move(title))
        , min(min)
        , max(max)
        , step(step)
        , def(def)
    {
        setName(name);
    }

    inline Type getType() override
    {
        return Type::Slider;
    }
    inline void setTitle(const string& _title)
    {
        this->title = _title;
    }
    inline void setMin(int _min)
    {
        this->min = _min;
    }
    inline void setMax(int _max)
    {
        this->max = _max;
    }
    inline void setStep(int _step)
    {
        this->step = _step;
    }
    inline void setDefault(int _def)
    {
        this->def = _def;
    }
    inline DataType getData() const
    {
        return data;
    }
};

class StepSlider : public CustomFormElement
{
protected:
    LIAPI string serialize() override;

public:
    using DataType = int;
    string title;
    vector<string> options;
    int def, data{};

public:
    inline StepSlider(const string& name, string title, const vector<string>& options, int defId = 0)
        : title(std::move(title))
        , options(options)
        , def(defId)
    {
        setName(name);
    }

    inline Type getType() override
    {
        return Type::StepSlider;
    }
    inline void setTitle(const string& _title)
    {
        this->title = _title;
    }
    inline void setOptions(const vector<string>& _options)
    {
        this->options = _options;
    }
    inline void addOption(const string& option)
    {
        options.push_back(option);
    }
    inline void setDefault(int defId)
    {
        this->def = defId;
    }
    inline DataType getData() const
    {
        return data;
    }
};

//////////////////////////////// Forms ////////////////////////////////

class FormImpl
{
protected:
    //fifo_json json;
    virtual string serialize() = 0;
};

class SimpleForm : public FormImpl
{
protected:
    LIAPI string serialize() override;

public:
    using Callback = std::function<void(int)>;
    string title, content;
    vector<std::shared_ptr<SimpleFormElement>> elements;
    Callback callback;

public:
    SimpleForm(string title, string content)
        : title(std::move(title))
        , content(std::move(content))
    {
    }

    template <typename T, typename... Args>
    SimpleForm(const string& title, const string& content, T element, Args... args)
    {
        append(element);
        SimpleForm(title, content, args...);
    }

    LIAPI SimpleForm& setTitle(const string& title);
    LIAPI SimpleForm& setContent(const string& content);
    LIAPI SimpleForm& append(const Button& element);
    LIAPI bool sendTo(ServerPlayer* player, Callback callback = Callback());
};

class CustomForm : public FormImpl
{
protected:
    LIAPI string serialize() override;

public:
    using Callback = std::function<void(const std::map<string, std::shared_ptr<CustomFormElement>>&)>;
    string title;
    std::vector<std::pair<string, std::shared_ptr<CustomFormElement>>> elements;
    Callback callback;

public:
    explicit CustomForm(string title)
        : title(std::move(title))
    {
    }

    template <typename T, typename... Args>
    CustomForm(const string& title, T element, Args... args)
    {
        append(element);
        CustomForm(title, args...);
    }

    LIAPI CustomForm& setTitle(const string& title);
    LIAPI CustomForm& append(const Label& element);
    LIAPI CustomForm& append(const Input& element);
    LIAPI CustomForm& append(const Toggle& element);
    LIAPI CustomForm& append(const Dropdown& element);
    LIAPI CustomForm& append(const Slider& element);
    LIAPI CustomForm& append(const StepSlider& element);
    LIAPI bool sendTo(ServerPlayer* player, Callback callback);

    template <typename T, typename DataType>
    inline DataType getData(const string& name)
    {
        for (auto& [k, v] : elements)
            if (k == name)
                return std::dynamic_pointer_cast<T>(v)->getData();
        return DataType();
    }

    template <typename T, typename DataType>
    inline DataType getData(int index)
    {
        return std::dynamic_pointer_cast<T>(elements[index].second)->getData();
    }

    inline CustomFormElement::Type getType(int index)
    {
        return elements[index].second->getType();
    }

    template <typename T, typename DataType>
    inline void setData(int index, DataType data)
    {
        std::dynamic_pointer_cast<T>(elements[index].second)->data = data;
    }
};
} // namespace Form

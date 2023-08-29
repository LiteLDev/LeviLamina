#pragma once
////////////////////////////////////////////////////////////////////////
//  Form UI Utility - Help you to build forms and options more easily
//
//  [Example - Simple Form]
//  - Form that contains several buttons (with optional image)
//  - Let the player choose an option from multiple options
//
//  SimpleForm form("Welcome to shop", "Choose what you want to do...");     // Initialize the form with title and content
//  form.addButton("Buy", "textures/items/apple",                            // Add a button "Buy" with texture image
//      [](Player* pl) { pl->sendText("To buy something..."); })             // Buy's callback function
//
//      .addButton("Sell", "https://xxx.com/xxx.png",                        // Add a button "Sell" with online image
//          [](Player* pl) { pl->sendText("To sell something..."); })        // Sell's callback function
//
//      .addButton("Settings", "",                                           // Add a button "Settings" with no image
//          [](Player* pl) { pl->sendText("Get into settings..."); })        // Settings's callback function
//
//      .addButton("Exit")                                                   // Add a single button "Exit"
//      .sendTo(Level::getPlayer("John"));                                   // Send the form to a player called "John"
//
//
//  [Example - Modal Form]
//  - Form with Confirm and Cancel buttons
//  - Let the player confirm or cancel an action
//
//  ModalForm form("Confirm the action", "Do you want that?", "Yes", "Nope");     // Initialize the form with title, content and two buttons ("Yes", "Nope")
//  form.sendTo(Level::getPlayer("S3v3N1ce"),                                     // Send the form to a player called "S3v3N1ce"
//      [](Player* player, bool isConfirm)                                        // Callback function to process the result
//          {
//              if (isConfirm)                                                    // Player pressed button "Yes"
//                  player->sendText("Okay, let's go");
//              else                                                              // Player pressed button "Nope"
//                  player->sendText("Hm, suit yourself");
//          });
//
//
//  [Example - Custom Form]
//  - Form that contains some kinds of elements (like input line, toggle, dropdown, ....)
//  - Let the player provide some detailed information
//
//  CustomForm form2("Information Collection Form");                               // Initialize the form with title
//  form2.addLabel("label1", "Personal Information")                               // Add a label shows "Personal Information"
//      .addInput("username", "Your Name")                                         // Add an input line to gather player's name
//      .addDropdown("sex", "Your Sex", { "Male","Female","Secret" })              // Add a dropdown to gather player's sex
//      .addSlider("age", "Your Age", 3, 100)                                      // Add a slider to gather player's age
//
//      .addLabel("label2", "MC Information")                                      // Add a label shows "MC Information"
//      .addToggle("licensed", "Purchased a licensed Minecraft?", true)            // Add a toggle about whether he buys a licensed mc or not
//      .addStepSlider("skill", "Skill Lvl", { "Beginner", "Amateur", "Pro" })     // Add a step slider shows his game skill level
//
//      .sendTo(Level::getPlayer("yqs112358"),                                     // Send the form to a player called "yqs112358"
//          [](Player* player, auto result)                                        // Callback function to process the result
//          {
//              if (result.empty())                                                // Player cancelled the form
//                  return;
//              player->sendText("You have commited the form.");
//              player->sendFormattedText("Your name: {}", result["username"]->getString());
//              player->sendFormattedText("Your sex: {}", result["sex"]->getString());
//              player->sendFormattedText("Your age: {}", result["age"]->getNumber());
//              player->sendFormattedText("Your license: {}", result["licensed"]->getBool() ? "yes" : "no");
//              player->sendFormattedText("Your skill level: {}:", result["skill"]->getString());
//          });
//
//
// Tips:  The <key> of std::map "result" equals the first argument "name" you pass to these elements
//         So, "name" must be *unique* or error will occur
//
////////////////////////////////////////////////////////////////////////


#include <utility>
#include "liteloader/api/Global.h"

class ServerPlayer;
class Player;


namespace Form {
//////////////////////////////// Simple Form Elements ////////////////////////////////
class SimpleFormElement {
protected:
    virtual string serialize() = 0;
    friend class SimpleForm;
};

class Button : public SimpleFormElement {
protected:
    LLAPI string serialize() override;

public:
    using ButtonCallback = std::function<void(Player*)>;
    string text, image;
    ButtonCallback callback;

public:
    inline explicit Button(string text, string image = "", ButtonCallback callback = ButtonCallback())
    : text(std::move(text))
    , image(std::move(image))
    , callback(std::move(callback)) {
    }
    inline void setText(const string& _text) {
        this->text = _text;
    }
    inline void setImage(const string& _image) {
        this->image = _image;
    }
    inline void setCallback(ButtonCallback _callback) {
        this->callback = std::move(_callback);
    }
};

//////////////////////////////// Custom Form Elements ////////////////////////////////
class CustomFormElement {
protected:
    LLAPI virtual string serialize() = 0;
    friend class CustomForm;

public:
    enum class Type {
        Label,
        Input,
        Toggle,
        Dropdown,
        Slider,
        StepSlider
    };
    string name;
    string value;
    Type type{};
    inline void setName(const string& _name) {
        this->name = _name;
    }
    inline virtual Type getType() = 0;
    LLAPI std::string getString();
    [[deprecated("Please use getInt")]]
    LLAPI int getNumber();
    LLAPI int getInt();
    LLAPI float getFloat();
    LLAPI double getDouble();
    LLAPI bool getBool();
};

class Label : public CustomFormElement {
protected:
    LLAPI string serialize() override;

public:
    string text;

public:
    inline Label(const string& name, string text)
    : text(std::move(text)) {
        setName(name);
    }
    inline Type getType() override {
        return Type::Label;
    }
    inline void setText(const string& _text) {
        this->text = _text;
    }
};

class Input : public CustomFormElement {
protected:
    LLAPI string serialize() override;

public:
    string title, placeholder, def;
    inline Input(const string& name, string title, string placeholder = "", string def = "")
    : title(std::move(title))
    , placeholder(std::move(placeholder))
    , def(std::move(def)) {
        setName(name);
    }
    inline Type getType() override {
        return Type::Input;
    }
    inline void setTitle(const string& _title) {
        this->title = _title;
    }
    inline void setPlaceHolder(const string& _placeholder) {
        this->placeholder = _placeholder;
    }
    inline void setDefault(const string& _def) {
        this->def = _def;
    }
};

class Toggle : public CustomFormElement {
protected:
    LLAPI string serialize() override;

public:
public:
    string title;
    bool def;

public:
    inline Toggle(const string& name, string title, bool def = false)
    : title(std::move(title))
    , def(def) {
        setName(name);
    }
    inline virtual Type getType() override {
        return Type::Toggle;
    }
    inline void setTitle(const string& _title) {
        this->title = _title;
    }
    inline void setDefault(bool _def) {
        this->def = _def;
    }
};

class Dropdown : public CustomFormElement {
protected:
    LLAPI string serialize() override;

public:
    string title;
    vector<string> options;
    int def;

public:
    inline Dropdown(const string& name, string title, const vector<string>& options, int defId = 0)
    : title(std::move(title))
    , options(options)
    , def(defId) {
        setName(name);
    }
    inline Type getType() override {
        return Type::Dropdown;
    }
    inline void setTitle(const string& _title) {
        this->title = _title;
    }
    inline void setOptions(const vector<string>& _options) {
        this->options = _options;
    }
    inline void addOption(const string& option) {
        options.push_back(option);
    }
    inline void setDefault(int defId) {
        this->def = defId;
    }
};

class Slider : public CustomFormElement {
protected:
    LLAPI string serialize() override;

public:
    string title;
    double minValue, maxValue, step, def;

public:
    inline Slider(const string& name, string title, double minValue, double maxValue, double step = 1, double def = 0)
    : title(std::move(title))
    , minValue(minValue)
    , maxValue(maxValue)
    , step(step)
    , def(def) {
        setName(name);
    }
    inline Type getType() override {
        return Type::Slider;
    }
    inline void setTitle(const string& _title) {
        this->title = _title;
    }
    inline void setMin(double _minValue) {
        this->minValue = _minValue;
    }
    inline void setMax(double _maxValue) {
        this->maxValue = _maxValue;
    }
    inline void setStep(double _step) {
        this->step = _step;
    }
    inline void setDefault(double _def) {
        this->def = _def;
    }
};

class StepSlider : public CustomFormElement {
protected:
    LLAPI string serialize() override;

public:
    string title;
    vector<string> options;
    int def;

public:
    inline StepSlider(const string& name, string title, const vector<string>& options, int defId = 0)
    : title(std::move(title))
    , options(options)
    , def(defId) {
        setName(name);
    }
    inline Type getType() override {
        return Type::StepSlider;
    }
    inline void setTitle(const string& _title) {
        this->title = _title;
    }
    inline void setOptions(const vector<string>& _options) {
        this->options = _options;
    }
    inline void addOption(const string& option) {
        options.push_back(option);
    }
    inline void setDefault(int defId) {
        this->def = defId;
    }
};

//////////////////////////////// Forms ////////////////////////////////
class FormImpl {
protected:
    // fifo_json json;
    virtual string serialize() = 0;
};

class SimpleForm : public FormImpl {
protected:
    LLAPI string serialize() override;

public:
    using Callback = std::function<void(Player*, int)>;
    string title, content;
    vector<std::shared_ptr<SimpleFormElement>> elements;
    Callback callback;

public:
    SimpleForm(string title, string content)
    : title(std::move(title))
    , content(std::move(content)) {
    }
    template <typename T, typename... Args>
    SimpleForm(const string& title, const string& content, T element, Args... args) {
        append(element);
        SimpleForm(title, content, args...);
    }
    LLAPI SimpleForm& setTitle(const string& title);
    LLAPI SimpleForm& setContent(const string& content);
    LLAPI SimpleForm& addButton(string text, string image = "", Button::ButtonCallback callback = Button::ButtonCallback());
    LLAPI SimpleForm& append(const Button& element);
    LLAPI bool sendTo(Player* player, Callback callback = Callback());
};

class ModalForm : public FormImpl {
protected:
    LLAPI string serialize() override;

public:
    using Callback = std::function<void(Player*, bool)>;
    string title, content, confirmButton, cancelButton;
    Callback callback;

public:
    ModalForm(string title, string content, string button1, string button2)
    : title(std::move(title))
    , content(std::move(content))
    , confirmButton(std::move(button1))
    , cancelButton(std::move(button2)) {
    }
    template <typename T, typename... Args>
    ModalForm(const string& title, const string& content, const string& confirmButton, const string& cancelButton, Args... args) {
        ModalForm(title, content, confirmButton, cancelButton, args...);
    }
    LLAPI ModalForm& setTitle(const string& title);
    LLAPI ModalForm& setContent(const string& content);
    LLAPI ModalForm& setConfirmButton(const string& text);
    LLAPI ModalForm& setCancelButton(const string& text);
    LLAPI bool sendTo(Player* player, Callback callback = Callback());
};

class CustomForm : public FormImpl {
protected:
    LLAPI string serialize() override;

public:
    using Callback = std::function<void(Player*, std::map<string, std::shared_ptr<CustomFormElement>>)>;
    using Callback2 = std::function<void(Player*, std::string)>;
    string title;
    std::vector<std::pair<string, std::shared_ptr<CustomFormElement>>> elements;
    Callback callback;

public:
    explicit CustomForm(string title)
    : title(std::move(title)) {
    }
    template <typename T, typename... Args>
    CustomForm(const string& title, T element, Args... args) {
        append(element);
        CustomForm(title, args...);
    }
    LLAPI CustomForm& setTitle(const string& title);

    LLAPI CustomForm& addLabel(const string& name, string text);
    LLAPI CustomForm& addInput(const string& name, string title, string placeholder = "", string def = "");
    LLAPI CustomForm& addToggle(const string& name, string title, bool def = false);
    LLAPI CustomForm& addDropdown(const string& name, string title, const vector<string>& options, int defId = 0);
    LLAPI CustomForm& addSlider(const string& name, string title, double min, double max, double step = 1, double def = 0);
    LLAPI CustomForm& addStepSlider(const string& name, string title, const vector<string>& options, int defId = 0);

    LLAPI CustomForm& append(const Label& element);
    LLAPI CustomForm& append(const Input& element);
    LLAPI CustomForm& append(const Toggle& element);
    LLAPI CustomForm& append(const Dropdown& element);
    LLAPI CustomForm& append(const Slider& element);
    LLAPI CustomForm& append(const StepSlider& element);

    LLAPI bool sendTo(Player* player, Callback callback);
    LLAPI bool sendToForRawJson(Player* player, Callback2 callback);
    LLAPI CustomFormElement* getElement(const string& name);
    LLAPI CustomFormElement* getElement(int index);
    LLAPI CustomFormElement::Type getType(int index);

    LLAPI string getString(const string& name);
    [[deprecated("Please use getInt")]]
    LLAPI int getNumber(const string& name);
    LLAPI int getInt(const string& name);
    LLAPI float getFloat(const string& name);
    LLAPI double getDouble(const string& name);
    LLAPI bool getBool(const string& name);
    LLAPI string getString(int index);
    [[deprecated("Please use getInt")]]
    LLAPI int getNumber(int index);
    LLAPI int getInt(int index);
    LLAPI float getFloat(int index);
    LLAPI double getDouble(int index);
    LLAPI bool getBool(int index);

    // Tool Functions
    template <typename T>
    inline void setValue(int index, T value) {
        elements[index].second->value = std::to_string(value);
    }
    inline void setValue(int index, string value) {
        elements[index].second->value = value;
    }
};
} // namespace Form

#ifndef SettingsScene_HPP
#define SettingsScene_HPP
#include <memory>

#include "Engine/IScene.hpp"
#include <allegro5/allegro_audio.h>
#include "UI/Component/Label.hpp"

class SettingsScene final : public Engine::IScene {
private:
    std::shared_ptr<ALLEGRO_SAMPLE_INSTANCE> bgmInstance;

public:
    explicit SettingsScene() = default;
    void Initialize() override;
    void Terminate() override;
    void BackOnClick(int stage);
    void BGMSlideOnValueChanged(float value);
    void SFXSlideOnValueChanged(float value);

    void RefreshLabels();
    Engine::Label* labelBack;
    Engine::Label* labelBGM;
    Engine::Label* labelSFX;
    Engine::Label* labelLanguage;
};

#endif   // SettingsScene_HPP

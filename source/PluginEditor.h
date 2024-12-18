#pragma once

#include "PluginProcessor.h"

//==============================================================================
class MyPluginAudioProcessorEditor final : public juce::AudioProcessorEditor
{
public:
    explicit MyPluginAudioProcessorEditor (MyPluginAudioProcessor&);
    ~MyPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MyPluginAudioProcessor& processorRef;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MyPluginAudioProcessorEditor)
};

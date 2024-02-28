/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NEAProjectTestAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NEAProjectTestAudioProcessorEditor (NEAProjectTestAudioProcessor&);
    ~NEAProjectTestAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    NEAProjectTestAudioProcessor& audioProcessor;

    juce::Slider gain;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NEAProjectTestAudioProcessorEditor)
};

// This class is responsible for the interface of the plugin - the pretty bit

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
NEAProjectTestAudioProcessorEditor::NEAProjectTestAudioProcessorEditor (NEAProjectTestAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
        
    // gain slider stuff
    gain.setSliderStyle(juce::Slider::LinearBarVertical);
    gain.setRange(0.0, 100.0, 1.0);
    gain.setTextBoxStyle(juce::Slider::NoTextBox, true, 90, 0);
    gain.setTextValueSuffix(" Gain");
    gain.setValue(1.0);

    addAndMakeVisible(gain);
}

NEAProjectTestAudioProcessorEditor::~NEAProjectTestAudioProcessorEditor()
{

}

//==============================================================================
void NEAProjectTestAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("NEA Project Test", getLocalBounds(), juce::Justification::centred, 1);
}

void NEAProjectTestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..

    gain.setBounds(40, 30, 20, getHeight() - 60);
}

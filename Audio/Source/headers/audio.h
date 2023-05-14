#ifndef AUDIO_H
#DEFINE AUDIO_H


class SineOcillator
{
	float freq;
	float amp;
	float angle = 0;
	float offset = 0;

public:
	SineOcillator(float freq2, float amp2) {
		freq = freq2;
		amp = amp2;
		offset = 2 * M_PI * freq / sampleRate;
	}

	float Process(){
		float sample = amp * sin(angle);
		angle += offset;

		return sample;
	}
};

#endif

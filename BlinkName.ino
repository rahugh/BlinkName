
std::string message("All work and no play makes Jack a dull boy");

int led1 = D7;
int unit = 100;

void setup() {
    pinMode(led1, OUTPUT);
}

void loop() {

    for (char const &c: message) {

        switch (char(tolower(c))) {
            case 'a':
                encode(12);
                break;
            case 'b':
                encode(2111);
                break;
            case 'c':
                encode(2121);
                break;
            case 'd':
                encode(211);
                break;
            case 'e':
                encode(1);
                break;
            case 'f':
                encode(1121);
                break;
            case 'g':
                encode(221);
                break;
            case 'h':
                encode(1111);
                break;
            case 'i':
                encode(11);
                break;
            case 'j':
                encode(1222);
                break;
            case 'k':
                encode(212);
                break;
            case 'l':
                encode(1211);
                break;
            case 'm':
                encode(22);
                break;
            case 'n':
                encode(21);
                break;
            case 'o':
                encode(222);
                break;
            case 'p':
                encode(1221);
                break;
            case 'q':
                encode(2212);
                break;
            case 'r':
                encode(121);
                break;
            case 's':
                encode(111);
                break;
            case 't':
                encode(2);
                break;
            case 'u':
                encode(112);
                break;
            case 'v':
                encode(1112);
                break;
            case 'w':
                encode(122);
                break;
            case 'x':
                encode(2112);
                break;
            case 'y':
                encode(2122);
                break;
            case 'z':
                encode(2211);
                break;
            case '\'':
                encode(122221);
                break;
            case '-':
                encode(211112);
                break;
            case ' ':
                delay(4*unit);
                break;
        }

        delay(2*unit);
    }

    delay(4*unit);
}

void encode(int number) {

    if (number >= 10) {
        encode(number / 10);
    }

    switch (number % 10) {
        case 1:
            dot();
            break;
        case 2:
            dash();
            break;
    }
}

void dot() {
    digitalWrite(led1, HIGH);
    delay(unit);
    digitalWrite(led1, LOW);
    delay(unit);
}

void dash() {
    digitalWrite(led1, HIGH);
    delay(3*unit);
    digitalWrite(led1, LOW);
    delay(unit);
}


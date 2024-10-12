## آزمایش شماره یک 💡

### گزارش کار و مراحل 📝

هدف ما در این آزمایش راه اندازی دو LED چشمک زن می باشد به صورتی که در هر لحظه یکی از آنها روشن و دیگری خاموش باشد و به طور متناوب خلاف یکدیگر چشمک بزنند.

---

### توصیف کد های برنامه 💻

```cpp
int led1 = 13;
int led2 = 7;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
}

void loop() {
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
delay(1000);
digitalWrite(led1, LOW);
digitalWrite(led2, high);
delay(1000);
}
```

---

### شرح کارکرد مدار به صورت ویدیویی 🖼️

![micro and circuit](/media/microprocessor_2.gif)

import requests

def send_message(webhook_url, message):
    data = {
        "content": message,
        "username": "SPY",
        "avatar_url": "https://i.postimg.cc/Dwzzsvsh/895338d6db77aac59a956f1f13b8a89e.jpg",
    }
    try:
        response = requests.post(webhook_url, json=data)
        if response.status_code == 204:
            print("\033[32m[!] THANH CONG!\033[0m")
        else:
            print(f"\033[31m[!] Khong Thanh Cong. CODE:\033[0m {response.status_code}")
            print(response.text)
    except Exception as e:
        print(f"\033[31m[!] DA XAY RA LOI: {e}\033[0m")

print("XIN CHAO, CAM ON BAN DA SU DUNG TOOL CUA SPY!\n")
webhook_urls = []
print("\033[33m[?] Nhap WebHook URL (Nhap 'done' de ket thuc): \033[0m")
while True:
    url = input("> ").strip()
    if url.lower() == "done":
        break
    if url:
        webhook_urls.append(url)

if not webhook_urls:
    print("\033[31m[!] Khong co URL nao duoc nhap. Thoat chuong trinh.\033[0m")
    exit()

message = input("\033[33m[?] Text:  \033[0m").strip()
spam_count = int(input("\033[33m[?] So Lan Gui:  \033[0m"))

for i in range(spam_count):
    print(f"\033[32m[/] Lan Gui Thu {i + 1}/{spam_count}...\033[0m")
    for webhook_url in webhook_urls:
        send_message(webhook_url, message)